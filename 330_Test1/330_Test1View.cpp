
// 330_Test1View.cpp : CMy330_Test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "330_Test1.h"
#endif

#include "330_Test1Doc.h"
#include "330_Test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy330_Test1View

IMPLEMENT_DYNCREATE(CMy330_Test1View, CView)

BEGIN_MESSAGE_MAP(CMy330_Test1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILEOPEN, &CMy330_Test1View::OnFileopen)
END_MESSAGE_MAP()

// CMy330_Test1View 构造/析构

CMy330_Test1View::CMy330_Test1View()
{
	// TODO:  在此处添加构造代码

}

CMy330_Test1View::~CMy330_Test1View()
{
}

BOOL CMy330_Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy330_Test1View 绘制

void CMy330_Test1View::OnDraw(CDC* pDC)
{
	CMy330_Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy330_Test1View 打印

BOOL CMy330_Test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy330_Test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMy330_Test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMy330_Test1View 诊断

#ifdef _DEBUG
void CMy330_Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy330_Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy330_Test1Doc* CMy330_Test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy330_Test1Doc)));
	return (CMy330_Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy330_Test1View 消息处理程序


void CMy330_Test1View::OnFileopen()
{
	// TODO:  在此添加命令处理程序代码
	CMy330_Test1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(this->GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		dc.TextOutW(100, 100, filename);
	}
}
