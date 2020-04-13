
// test3_16View.cpp : Ctest3_16View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test3_16.h"
#endif

#include "test3_16Doc.h"
#include "test3_16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest3_16View

IMPLEMENT_DYNCREATE(Ctest3_16View, CView)

BEGIN_MESSAGE_MAP(Ctest3_16View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctest3_16View 构造/析构

Ctest3_16View::Ctest3_16View()
{
	// TODO:  在此处添加构造代码

}

Ctest3_16View::~Ctest3_16View()
{
}

BOOL Ctest3_16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest3_16View 绘制

void Ctest3_16View::OnDraw(CDC* /*pDC*/)
{
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// Ctest3_16View 打印

BOOL Ctest3_16View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Ctest3_16View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void Ctest3_16View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// Ctest3_16View 诊断

#ifdef _DEBUG
void Ctest3_16View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest3_16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest3_16Doc* Ctest3_16View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest3_16Doc)));
	return (Ctest3_16Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest3_16View 消息处理程序


void Ctest3_16View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetCapture();
	pDoc->A.left = point.x;
	pDoc->A.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest3_16View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	ReleaseCapture();
	pDoc->A.right = point.x;
	pDoc->A.bottom = point.y;
	CClientDC dc(this);
	dc.Rectangle(pDoc->A.left, pDoc->A.top,pDoc->A.right,pDoc->A.bottom);
	CView::OnLButtonUp(nFlags, point);
}



void Ctest3_16View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CClientDC clientDC(this);
	CString s;
	s.Format(_T("X:%d Y:%d"), point.x, point.y);
	CView::OnMouseMove(nFlags, point);
}
