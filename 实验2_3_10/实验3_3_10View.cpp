
// ʵ��3_3_10View.cpp : Cʵ��3_3_10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3_3_10.h"
#endif

#include "ʵ��3_3_10Doc.h"
#include "ʵ��3_3_10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��3_3_10View

IMPLEMENT_DYNCREATE(Cʵ��3_3_10View, CView)

BEGIN_MESSAGE_MAP(Cʵ��3_3_10View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��3_3_10View ����/����

Cʵ��3_3_10View::Cʵ��3_3_10View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��3_3_10View::~Cʵ��3_3_10View()
{
}

BOOL Cʵ��3_3_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��3_3_10View ����

void Cʵ��3_3_10View::OnDraw(CDC* pDC)
{
	Cʵ��3_3_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int a = pDoc->A;
	int b = pDoc->B;
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��3_3_10View ��ӡ

BOOL Cʵ��3_3_10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��3_3_10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��3_3_10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��3_3_10View ���

#ifdef _DEBUG
void Cʵ��3_3_10View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��3_3_10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��3_3_10Doc* Cʵ��3_3_10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��3_3_10Doc)));
	return (Cʵ��3_3_10Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��3_3_10View ��Ϣ�������


void Cʵ��3_3_10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��3_3_10Doc* pDoc = GetDocument();

	int a = pDoc->A;
	int b = pDoc->B;
	CString s1;
	CString s2;
	s2.Format(_T("A+B=%d"), a + b);
	CClientDC dc(this);
	dc.TextOutW(300, 300, s2);
	CView::OnLButtonDown(nFlags, point);
}
