
// 414_test1View.cpp : CMy414_test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "414_test1.h"
#endif

#include "414_test1Doc.h"
#include "414_test1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy414_test1View

IMPLEMENT_DYNCREATE(CMy414_test1View, CView)

BEGIN_MESSAGE_MAP(CMy414_test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Popout, &CMy414_test1View::OnPopout)
END_MESSAGE_MAP()

// CMy414_test1View ����/����

CMy414_test1View::CMy414_test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy414_test1View::~CMy414_test1View()
{
}

BOOL CMy414_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy414_test1View ����

void CMy414_test1View::OnDraw(CDC* /*pDC*/)
{
	CMy414_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy414_test1View ��ӡ

BOOL CMy414_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy414_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy414_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy414_test1View ���

#ifdef _DEBUG
void CMy414_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy414_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy414_test1Doc* CMy414_test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy414_test1Doc)));
	return (CMy414_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy414_test1View ��Ϣ�������


void CMy414_test1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CFileDialog cd(true);
	int r = cd.DoModal();
	if (r == IDOK)
	{
		CString filename = cd.GetPathName();
		dc.TextOutW(200,300,filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy414_test1View::OnPopout()
{
	// TODO:  �ڴ���������������

}
