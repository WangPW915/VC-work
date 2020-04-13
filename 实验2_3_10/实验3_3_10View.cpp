
// 实验3_3_10View.cpp : C实验3_3_10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3_3_10.h"
#endif

#include "实验3_3_10Doc.h"
#include "实验3_3_10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验3_3_10View

IMPLEMENT_DYNCREATE(C实验3_3_10View, CView)

BEGIN_MESSAGE_MAP(C实验3_3_10View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C实验3_3_10View 构造/析构

C实验3_3_10View::C实验3_3_10View()
{
	// TODO:  在此处添加构造代码

}

C实验3_3_10View::~C实验3_3_10View()
{
}

BOOL C实验3_3_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验3_3_10View 绘制

void C实验3_3_10View::OnDraw(CDC* pDC)
{
	C实验3_3_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int a = pDoc->A;
	int b = pDoc->B;
	// TODO:  在此处为本机数据添加绘制代码
}


// C实验3_3_10View 打印

BOOL C实验3_3_10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验3_3_10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void C实验3_3_10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// C实验3_3_10View 诊断

#ifdef _DEBUG
void C实验3_3_10View::AssertValid() const
{
	CView::AssertValid();
}

void C实验3_3_10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验3_3_10Doc* C实验3_3_10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验3_3_10Doc)));
	return (C实验3_3_10Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验3_3_10View 消息处理程序


void C实验3_3_10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	C实验3_3_10Doc* pDoc = GetDocument();

	int a = pDoc->A;
	int b = pDoc->B;
	CString s1;
	CString s2;
	s2.Format(_T("A+B=%d"), a + b);
	CClientDC dc(this);
	dc.TextOutW(300, 300, s2);
	CView::OnLButtonDown(nFlags, point);
}
