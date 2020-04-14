
// 413_test3View.cpp : CMy413_test3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "413_test3.h"
#endif

#include "413_test3Doc.h"
#include "413_test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test3View

IMPLEMENT_DYNCREATE(CMy413_test3View, CView)

BEGIN_MESSAGE_MAP(CMy413_test3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy413_test3View 构造/析构

CMy413_test3View::CMy413_test3View()
{
	// TODO:  在此处添加构造代码
	flag = 0;
	satus = 0;
	set = true;
	cr.left = 200;
	cr.top = 300;
	cr.right = 220;
	cr.bottom = 320;
}

CMy413_test3View::~CMy413_test3View()
{
}

BOOL CMy413_test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy413_test3View 绘制

void CMy413_test3View::OnDraw(CDC* pDC)
{
	CMy413_test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
	if (set)
	{
		SetTimer(0, 200, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMy413_test3View 打印

BOOL CMy413_test3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy413_test3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy413_test3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy413_test3View 诊断

#ifdef _DEBUG
void CMy413_test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test3Doc* CMy413_test3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test3Doc)));
	return (CMy413_test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test3View 消息处理程序


void CMy413_test3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	CRect re;
	GetClientRect(&re);
	if (satus == 1)
	{
		if (flag == 0 && cr.right < (re.right - re.left))
		{
			cr.left += 10;
			cr.right += 10;
		}
		else flag += 1;
		if (flag >= 1 && cr.left>0)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		else flag = 0;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}




void CMy413_test3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	satus = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy413_test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	satus = 1;
	CView::OnLButtonDown(nFlags, point);
}
