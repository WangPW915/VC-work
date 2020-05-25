
// 420_test_3View.cpp : CMy420_test_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "420_test_3.h"
#endif

#include "420_test_3Doc.h"
#include "420_test_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test_3View

IMPLEMENT_DYNCREATE(CMy420_test_3View, CView)

BEGIN_MESSAGE_MAP(CMy420_test_3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy420_test_3View 构造/析构

CMy420_test_3View::CMy420_test_3View()
{
	// TODO:  在此处添加构造代码
	cr.left = 100;
	cr.top = 300;
	cr.right = 400;
	cr.bottom = 500;
}

CMy420_test_3View::~CMy420_test_3View()
{
}

BOOL CMy420_test_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy420_test_3View 绘制

void CMy420_test_3View::OnDraw(CDC* pDC)
{
	CMy420_test_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
	pDC->Ellipse(&cr);
}


// CMy420_test_3View 打印

BOOL CMy420_test_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy420_test_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy420_test_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy420_test_3View 诊断

#ifdef _DEBUG
void CMy420_test_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test_3Doc* CMy420_test_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test_3Doc)));
	return (CMy420_test_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test_3View 消息处理程序


void CMy420_test_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	CPen newpen(PS_DASH, 1, RGB(200, 100, 100));
	CPen *oldpen = dc.SelectObject(&newpen);

	dc.Rectangle(100, 300, 400, 500);
	dc.Ellipse(100, 300, 400, 500);

	dc.SelectObject(oldpen);
	CView::OnLButtonDown(nFlags, point);
}
