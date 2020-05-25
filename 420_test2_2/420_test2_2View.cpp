
// 420_test2_2View.cpp : CMy420_test2_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "420_test2_2.h"
#endif

#include "420_test2_2Doc.h"
#include "420_test2_2View.h"
#include "Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_2View

IMPLEMENT_DYNCREATE(CMy420_test2_2View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy420_test2_2View::OnPopout)
END_MESSAGE_MAP()

// CMy420_test2_2View 构造/析构

CMy420_test2_2View::CMy420_test2_2View()
{
	// TODO:  在此处添加构造代码
	cr.left = 0;
	cr.top = 0;
	cr.right = 0;
	cr.bottom = 0;
}

CMy420_test2_2View::~CMy420_test2_2View()
{
}

BOOL CMy420_test2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_2View 绘制

void CMy420_test2_2View::OnDraw(CDC* pDC)
{
	CMy420_test2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Ellipse(&cr);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMy420_test2_2View 打印

BOOL CMy420_test2_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy420_test2_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy420_test2_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy420_test2_2View 诊断

#ifdef _DEBUG
void CMy420_test2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_2Doc* CMy420_test2_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_2Doc)));
	return (CMy420_test2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_2View 消息处理程序


void CMy420_test2_2View::OnPopout()
{
	// TODO:  在此添加命令处理程序代码
	Dlg1 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		cr.left = dlg.a;
		cr.top = dlg.b;
		cr.right = dlg.c;
		cr.bottom = dlg.d;

	}
	Invalidate();
}
