
// 实验3_317View.cpp : C实验3_317View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3_317.h"
#endif

#include "实验3_317Doc.h"
#include "实验3_317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验3_317View

IMPLEMENT_DYNCREATE(C实验3_317View, CView)

BEGIN_MESSAGE_MAP(C实验3_317View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C实验3_317View 构造/析构

C实验3_317View::C实验3_317View()
{
	// TODO:  在此处添加构造代码

}

C实验3_317View::~C实验3_317View()
{
}

BOOL C实验3_317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验3_317View 绘制

void C实验3_317View::OnDraw(CDC* pDC)
{
	C实验3_317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (pDoc->set)
	{

		SetTimer(0, 200, NULL);
		pDoc->set = false;

	}

	pDC->Ellipse(pDoc->re);

	// TODO:  在此处为本机数据添加绘制代码
}


// C实验3_317View 打印

BOOL C实验3_317View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验3_317View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void C实验3_317View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// C实验3_317View 诊断

#ifdef _DEBUG
void C实验3_317View::AssertValid() const
{
	CView::AssertValid();
}

void C实验3_317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验3_317Doc* C实验3_317View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验3_317Doc)));
	return (C实验3_317Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验3_317View 消息处理程序


void C实验3_317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	C实验3_317Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);

	if (pDoc->flag == 0 && pDoc->re.bottom < (cr.bottom - cr.top))
	{
		pDoc->re.top += 10;
		pDoc->re.bottom += 10;
	}
	else pDoc->flag += 1;
	if (pDoc->flag >= 1 && (pDoc->re.top>0))
	{

		pDoc->re.top -= 10;
		pDoc->re.bottom -= 10;

	}
	else pDoc->flag = 0;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
