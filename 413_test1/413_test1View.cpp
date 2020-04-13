
// 413_test1View.cpp : CMy413_test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "413_test1.h"
#endif

#include "413_test1Doc.h"
#include "413_test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test1View

IMPLEMENT_DYNCREATE(CMy413_test1View, CView)

BEGIN_MESSAGE_MAP(CMy413_test1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy413_test1View 构造/析构

CMy413_test1View::CMy413_test1View()
{
	// TODO:  在此处添加构造代码

}

CMy413_test1View::~CMy413_test1View()
{
}

BOOL CMy413_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy413_test1View 绘制

void CMy413_test1View::OnDraw(CDC* pDC)
{
	CMy413_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	cr.left = x - 50;
	cr.top = y - 50;
	cr.right = x + 50;
	cr.bottom = y + 40;

	pDC->Rectangle(cr);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMy413_test1View 打印

BOOL CMy413_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy413_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy413_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy413_test1View 诊断

#ifdef _DEBUG
void CMy413_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test1Doc* CMy413_test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test1Doc)));
	return (CMy413_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test1View 消息处理程序


void CMy413_test1View::OnMouseMove(UINT nFlags, CPoint point)
{
	CMy413_test1Doc* pDoc = GetDocument();
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	if (flag >= 1)
	{
		x = point.x;
		y = point.y;

		Invalidate();
	}
    CView::OnMouseMove(nFlags, point);

}


void CMy413_test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	flag = 0;
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;

	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}


void CMy413_test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;
	CView::OnLButtonDown(nFlags, point);
}
