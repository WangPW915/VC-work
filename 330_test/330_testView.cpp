
// 330_testView.cpp : CMy330_testView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "330_test.h"
#endif

#include "330_testDoc.h"
#include "330_testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy330_testView

IMPLEMENT_DYNCREATE(CMy330_testView, CView)

BEGIN_MESSAGE_MAP(CMy330_testView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILEOPEN, &CMy330_testView::OnFileopen)
END_MESSAGE_MAP()

// CMy330_testView 构造/析构

CMy330_testView::CMy330_testView()
{
	// TODO:  在此处添加构造代码

}

CMy330_testView::~CMy330_testView()
{
}

BOOL CMy330_testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy330_testView 绘制

void CMy330_testView::OnDraw(CDC* pDC)
{
	CMy330_testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy330_testView 打印

BOOL CMy330_testView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy330_testView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy330_testView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy330_testView 诊断

#ifdef _DEBUG
void CMy330_testView::AssertValid() const
{
	CView::AssertValid();
}

void CMy330_testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy330_testDoc* CMy330_testView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy330_testDoc)));
	return (CMy330_testDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy330_testView 消息处理程序


void CMy330_testView::OnFileopen()
{
	// TODO:  在此添加命令处理程序代码
	CMy330_testDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 300, filename);
        
	}
}
