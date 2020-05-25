
// 420_test2_1View.cpp : CMy420_test2_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "420_test2_1.h"
#endif

#include "420_test2_1Doc.h"
#include "420_test2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_1View

IMPLEMENT_DYNCREATE(CMy420_test2_1View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy420_test2_1View 构造/析构

CMy420_test2_1View::CMy420_test2_1View()
{
	// TODO:  在此处添加构造代码
	flag = 0;
}

CMy420_test2_1View::~CMy420_test2_1View()
{
}

BOOL CMy420_test2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_1View 绘制

void CMy420_test2_1View::OnDraw(CDC* pDC)
{
	CMy420_test2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect cr(a, b);
	pDC->Ellipse(&cr);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMy420_test2_1View 打印

BOOL CMy420_test2_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy420_test2_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy420_test2_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy420_test2_1View 诊断

#ifdef _DEBUG
void CMy420_test2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_1Doc* CMy420_test2_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_1Doc)));
	return (CMy420_test2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_1View 消息处理程序


void CMy420_test2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	a = point;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy420_test2_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CMy420_test2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	b = point;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
