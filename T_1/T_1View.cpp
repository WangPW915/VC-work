
// T_1View.cpp : CT_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "T_1.h"
#endif

#include "T_1Doc.h"
#include "T_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT_1View

IMPLEMENT_DYNCREATE(CT_1View, CView)

BEGIN_MESSAGE_MAP(CT_1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CT_1View 构造/析构

CT_1View::CT_1View()
{
	// TODO:  在此处添加构造代码

}

CT_1View::~CT_1View()
{
}

BOOL CT_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CT_1View 绘制

void CT_1View::OnDraw(CDC* /*pDC*/)
{
	CT_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CT_1View 打印

BOOL CT_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CT_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CT_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CT_1View 诊断

#ifdef _DEBUG
void CT_1View::AssertValid() const
{
	CView::AssertValid();
}

void CT_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CT_1Doc* CT_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT_1Doc)));
	return (CT_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CT_1View 消息处理程序


void CT_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	int r=0;
	if (cr.Height() > cr.Width())
		r = cr.Width() / 2;
	else 
		r = cr.Height() / 2;
	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	CClientDC dc(this);
	dc.Ellipse(x - r, y - r, x + r, y + r);

	CView::OnLButtonDown(nFlags, point);
}
