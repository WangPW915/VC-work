
// 331_test1View.cpp : CMy331_test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "331_test1.h"
#endif

#include "331_test1Doc.h"
#include "331_test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy331_test1View

IMPLEMENT_DYNCREATE(CMy331_test1View, CView)

BEGIN_MESSAGE_MAP(CMy331_test1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy331_test1View 构造/析构

CMy331_test1View::CMy331_test1View()
{
	// TODO:  在此处添加构造代码

}

CMy331_test1View::~CMy331_test1View()
{
}

BOOL CMy331_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy331_test1View 绘制

void CMy331_test1View::OnDraw(CDC* pDC)
{
	CMy331_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO:  在此处为本机数据添加绘制代码
	pDC->Rectangle(190, 190, 510, 500);
}


// CMy331_test1View 打印

BOOL CMy331_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy331_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy331_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy331_test1View 诊断

#ifdef _DEBUG
void CMy331_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy331_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy331_test1Doc* CMy331_test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy331_test1Doc)));
	return (CMy331_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy331_test1View 消息处理程序


void CMy331_test1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CString ch;
	CClientDC dc(this);

	s.AppendChar(nChar);

	CRect Rect(200, 200, 500,500);

	ch.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200)
	{
		m = (x - 200) / 10 + (y - 200)/20*30;

		s.Insert(m, nChar);
	}
	else
		s.Append(ch); 

	dc.DrawText(s,Rect, DT_LEFT |DT_WORDBREAK|DT_EDITCONTROL );

	CView::OnChar(nChar, nRepCnt, nFlags);
}
