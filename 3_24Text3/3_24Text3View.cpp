
// 3_24Text3View.cpp : CMy3_24Text3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3_24Text3.h"
#endif

#include "3_24Text3Doc.h"
#include "3_24Text3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_24Text3View

IMPLEMENT_DYNCREATE(CMy3_24Text3View, CView)

BEGIN_MESSAGE_MAP(CMy3_24Text3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAWLINE, &CMy3_24Text3View::OnDrawline)
	ON_COMMAND(ID_DRAWRECTANGLE, &CMy3_24Text3View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &CMy3_24Text3View::OnDrawellipse)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy3_24Text3View 构造/析构

CMy3_24Text3View::CMy3_24Text3View()
{
	// TODO:  在此处添加构造代码

}

CMy3_24Text3View::~CMy3_24Text3View()
{
}

BOOL CMy3_24Text3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3_24Text3View 绘制

void CMy3_24Text3View::OnDraw(CDC* pDC)
{
	CMy3_24Text3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy3_24Text3View 打印

BOOL CMy3_24Text3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3_24Text3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy3_24Text3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy3_24Text3View 诊断

#ifdef _DEBUG
void CMy3_24Text3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_24Text3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_24Text3Doc* CMy3_24Text3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_24Text3Doc)));
	return (CMy3_24Text3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_24Text3View 消息处理程序


void CMy3_24Text3View::OnDrawline()
{
	// TODO:  在此添加命令处理程序代码

	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 1;

}


void CMy3_24Text3View::OnDrawrectangle()
{
	// TODO:  在此添加命令处理程序代码
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 2;
}


void CMy3_24Text3View::OnDrawellipse()
{
	// TODO:  在此添加命令处理程序代码
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 3;
}


void CMy3_24Text3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CMy3_24Text3Doc* pDoc = GetDocument();

	pDoc->m_point = point;

	CView::OnMouseMove(nFlags, point);
}


void CMy3_24Text3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMy3_24Text3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	CMy3_24Text3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m_point = point;
	dc.MoveTo(pDoc->m_point);
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	InvalidateRect(NULL, TRUE);

	CView::OnLButtonUp(nFlags, point);
}
