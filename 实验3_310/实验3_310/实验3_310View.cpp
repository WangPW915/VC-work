
// 实验3_310View.cpp : C实验3_310View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3_310.h"
#endif

#include "实验3_310Doc.h"
#include "实验3_310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验3_310View

IMPLEMENT_DYNCREATE(C实验3_310View, CView)

BEGIN_MESSAGE_MAP(C实验3_310View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C实验3_310View 构造/析构

C实验3_310View::C实验3_310View()
{
	// TODO:  在此处添加构造代码

}

C实验3_310View::~C实验3_310View()
{
}

BOOL C实验3_310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验3_310View 绘制

void C实验3_310View::OnDraw(CDC* pDC)
{
	C实验3_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);

	CString AA = _T("A");
	CString BB = _T("B");
	CString CC = _T("C");

	dc.Rectangle(pDoc->A);
	dc.TextOutW(150, 250, AA);

	dc.Rectangle(pDoc->B);
	dc.TextOutW(350, 250, BB);

	dc.Rectangle(pDoc->C);
	dc.TextOutW(550, 250, CC);
	// TODO:  在此处为本机数据添加绘制代码
}


// C实验3_310View 打印

BOOL C实验3_310View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验3_310View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void C实验3_310View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// C实验3_310View 诊断

#ifdef _DEBUG
void C实验3_310View::AssertValid() const
{
	CView::AssertValid();
}

void C实验3_310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验3_310Doc* C实验3_310View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验3_310Doc)));
	return (C实验3_310Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验3_310View 消息处理程序


void C实验3_310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	C实验3_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s, aa, bb, ss;
	aa.Format(_T("%d"), pDoc->a);
	bb.Format(_T("%d"), pDoc->b);
	ss.Format(_T("%d"), pDoc->a+pDoc->b);
	CClientDC dc(this);

	if (pDoc->A.PtInRect(point))
		dc.TextOutW(110, 120, aa);
	else if (pDoc->B.PtInRect(point))
		dc.TextOutW(310, 123, bb);
	else if (pDoc->C.PtInRect(point))
		dc.TextOutW(520, 120, ss);

	else dc.TextOutW(180, 50, s);
	CView::OnLButtonDown(nFlags, point);
}
