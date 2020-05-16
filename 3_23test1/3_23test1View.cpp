
// 3_23test1View.cpp : CMy3_23test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3_23test1.h"
#endif

#include "3_23test1Doc.h"
#include "3_23test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_23test1View

IMPLEMENT_DYNCREATE(CMy3_23test1View, CView)

BEGIN_MESSAGE_MAP(CMy3_23test1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_Circlechange, &CMy3_23test1View::OnCirclechange)
END_MESSAGE_MAP()

// CMy3_23test1View 构造/析构

CMy3_23test1View::CMy3_23test1View()
{
	// TODO:  在此处添加构造代码
	x = 707; y = 298;
	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CMy3_23test1View::~CMy3_23test1View()
{
}

BOOL CMy3_23test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3_23test1View 绘制

void CMy3_23test1View::OnDraw(CDC* pDC)
{
	CMy3_23test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO:  在此处为本机数据添加绘制代码
}


// CMy3_23test1View 打印

BOOL CMy3_23test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3_23test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy3_23test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy3_23test1View 诊断

#ifdef _DEBUG
void CMy3_23test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_23test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_23test1Doc* CMy3_23test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_23test1Doc)));
	return (CMy3_23test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_23test1View 消息处理程序


void CMy3_23test1View::OnCirclechange()
{
	CClientDC dc(this);
	for (int i = 0; i < 2 * y; i = rect.bottom)
	{

		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;


		Invalidate();
		dc.Ellipse(rect);
	}
	// TODO:  在此添加命令处理程序代码
}
