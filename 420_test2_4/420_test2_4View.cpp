
// 420_test2_4View.cpp : CMy420_test2_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "420_test2_4.h"
#endif

#include "420_test2_4Doc.h"
#include "420_test2_4View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_4View

IMPLEMENT_DYNCREATE(CMy420_test2_4View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_4View, CView)
	ON_COMMAND(ID_POPOUT, &CMy420_test2_4View::OnPopout)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy420_test2_4View 构造/析构

CMy420_test2_4View::CMy420_test2_4View()
{
	// TODO:  在此处添加构造代码
	r = g = b = 0;
}

CMy420_test2_4View::~CMy420_test2_4View()
{
}

BOOL CMy420_test2_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_4View 绘制

void CMy420_test2_4View::OnDraw(CDC* /*pDC*/)
{
	CMy420_test2_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy420_test2_4View 诊断

#ifdef _DEBUG
void CMy420_test2_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_4Doc* CMy420_test2_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_4Doc)));
	return (CMy420_test2_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_4View 消息处理程序


void CMy420_test2_4View::OnPopout()
{
	// TODO:  在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		r = dlg.R;
		g = dlg.G;
		b = dlg.B;

	}
	CClientDC dc(this);
	CPen newpen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *oldpen = dc.SelectObject(&newpen);

	//dc.SelectObject(oldpen);
	dc.Ellipse(cr);
	CBrush newbrush(RGB(r, g, b));
	CBrush *oldbrush = dc.SelectObject(&newbrush);
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);
}


void CMy420_test2_4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
