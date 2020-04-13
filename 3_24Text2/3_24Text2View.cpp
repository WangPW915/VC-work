
// 3_24Text2View.cpp : CMy3_24Text2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3_24Text2.h"
#endif

#include "3_24Text2Doc.h"
#include "3_24Text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_24Text2View

IMPLEMENT_DYNCREATE(CMy3_24Text2View, CView)

BEGIN_MESSAGE_MAP(CMy3_24Text2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy3_24Text2View 构造/析构

CMy3_24Text2View::CMy3_24Text2View()
{
	// TODO:  在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CMy3_24Text2View::~CMy3_24Text2View()
{
}

BOOL CMy3_24Text2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3_24Text2View 绘制

void CMy3_24Text2View::OnDraw(CDC* pDC)
{
	CMy3_24Text2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMy3_24Text2View 打印

BOOL CMy3_24Text2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3_24Text2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy3_24Text2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy3_24Text2View 诊断

#ifdef _DEBUG
void CMy3_24Text2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_24Text2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_24Text2Doc* CMy3_24Text2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_24Text2Doc)));
	return (CMy3_24Text2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_24Text2View 消息处理程序
