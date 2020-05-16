
// 3_23test2View.cpp : CMy3_23test2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3_23test2.h"
#endif

#include "3_23test2Doc.h"
#include "3_23test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_23test2View

IMPLEMENT_DYNCREATE(CMy3_23test2View, CView)

BEGIN_MESSAGE_MAP(CMy3_23test2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_Colorcirclechange, &CMy3_23test2View::OnColorcirclechange)
END_MESSAGE_MAP()

// CMy3_23test2View 构造/析构

CMy3_23test2View::CMy3_23test2View()
{
	// TODO:  在此处添加构造代码
	x = 707; y = 298;
	red = 0; green = 0; blue = 0;

	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CMy3_23test2View::~CMy3_23test2View()
{
}

BOOL CMy3_23test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3_23test2View 绘制

void CMy3_23test2View::OnDraw(CDC* pDC)
{
	CMy3_23test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMy3_23test2View 打印

BOOL CMy3_23test2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3_23test2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy3_23test2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy3_23test2View 诊断

#ifdef _DEBUG
void CMy3_23test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_23test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_23test2Doc* CMy3_23test2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_23test2Doc)));
	return (CMy3_23test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_23test2View 消息处理程序

void CMy3_23test2View::OnColorcirclechange()
{
	// TODO:  在此添加命令处理程序代码
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		red += 15;
		green += 10;
		blue += 8;
		color = RGB(red, green, blue);
		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;
		CBrush newBrush(color);
		CBrush *oldBrush = dc.SelectObject(&newBrush);

		dc.Ellipse(rect);
		dc.SelectObject(oldBrush);


		Invalidate();

	}
}
