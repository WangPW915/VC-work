
// 3_03Text1View.cpp : CMy3_03Text1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3_03Text1.h"
#endif

#include "3_03Text1Doc.h"
#include "3_03Text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_03Text1View

IMPLEMENT_DYNCREATE(CMy3_03Text1View, CView)

BEGIN_MESSAGE_MAP(CMy3_03Text1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy3_03Text1View 构造/析构

CMy3_03Text1View::CMy3_03Text1View()
{
	// TODO:  在此处添加构造代码

}

CMy3_03Text1View::~CMy3_03Text1View()
{
}

BOOL CMy3_03Text1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3_03Text1View 绘制

void CMy3_03Text1View::OnDraw(CDC* pDC)
{
	CMy3_03Text1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
	CString S = _T("我是*****");
	int b = pDoc->A;
	CString s;
	s.Format(_T("%d"), b);
	pDC->TextOutW(200, 300, s);
	pDC->TextOutW(100, 200, S);
}


// CMy3_03Text1View 打印

BOOL CMy3_03Text1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3_03Text1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy3_03Text1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy3_03Text1View 诊断

#ifdef _DEBUG
void CMy3_03Text1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_03Text1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_03Text1Doc* CMy3_03Text1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_03Text1Doc)));
	return (CMy3_03Text1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_03Text1View 消息处理程序
