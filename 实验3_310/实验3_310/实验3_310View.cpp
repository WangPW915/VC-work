
// ʵ��3_310View.cpp : Cʵ��3_310View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3_310.h"
#endif

#include "ʵ��3_310Doc.h"
#include "ʵ��3_310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��3_310View

IMPLEMENT_DYNCREATE(Cʵ��3_310View, CView)

BEGIN_MESSAGE_MAP(Cʵ��3_310View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cʵ��3_310View ����/����

Cʵ��3_310View::Cʵ��3_310View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��3_310View::~Cʵ��3_310View()
{
}

BOOL Cʵ��3_310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��3_310View ����

void Cʵ��3_310View::OnDraw(CDC* pDC)
{
	Cʵ��3_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);

	CString AA = _T("A");
	CString BB = _T("B");
	CString CC = _T("C");

	dc.Rectangle(pDoc->A);
	dc.TextOutW(150, 250, AA);

	dc.Rectangle(pDoc->B);
	dc.TextOutW(350, 250, BB);

	dc.Rectangle(pDoc->C);
	dc.TextOutW(550, 250, CC);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��3_310View ��ӡ

BOOL Cʵ��3_310View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��3_310View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��3_310View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��3_310View ���

#ifdef _DEBUG
void Cʵ��3_310View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��3_310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��3_310Doc* Cʵ��3_310View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��3_310Doc)));
	return (Cʵ��3_310Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��3_310View ��Ϣ�������


void Cʵ��3_310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��3_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s, aa, bb, ss;
	aa.Format(_T("%d"), pDoc->a);
	bb.Format(_T("%d"), pDoc->b);
	ss.Format(_T("%d"), pDoc->a+pDoc->b);
	CClientDC dc(this);

	if (pDoc->A.PtInRect(point))
		dc.TextOutW(110, 120, aa);
	else if (pDoc->B.PtInRect(point))
		dc.TextOutW(310, 123, bb);
	else if (pDoc->C.PtInRect(point))
		dc.TextOutW(520, 120, ss);

	else dc.TextOutW(180, 50, s);
	CView::OnLButtonDown(nFlags, point);
}
