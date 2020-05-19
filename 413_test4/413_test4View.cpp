
// 413_test4View.cpp : CMy413_test4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "413_test4.h"
#endif

#include "413_test4Doc.h"
#include "413_test4View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test4View

IMPLEMENT_DYNCREATE(CMy413_test4View, CView)

BEGIN_MESSAGE_MAP(CMy413_test4View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy413_test4View::OnPopout)
END_MESSAGE_MAP()

// CMy413_test4View 构造/析构

CMy413_test4View::CMy413_test4View()
{
	// TODO:  在此处添加构造代码

}

CMy413_test4View::~CMy413_test4View()
{
}

BOOL CMy413_test4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy413_test4View 绘制

void CMy413_test4View::OnDraw(CDC* /*pDC*/)
{
	CMy413_test4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy413_test4View 打印

BOOL CMy413_test4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy413_test4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy413_test4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy413_test4View 诊断

#ifdef _DEBUG
void CMy413_test4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test4Doc* CMy413_test4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test4Doc)));
	return (CMy413_test4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test4View 消息处理程序


void CMy413_test4View::OnPopout()
{
	// TODO:  在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString A, C;
		int B;
		A = dlg.s1;
		B = dlg.s2;
		C = dlg.s3;
	}
}
