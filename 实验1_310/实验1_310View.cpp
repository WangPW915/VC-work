
// ʵ��1_310View.cpp : Cʵ��1_310View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1_310.h"
#endif

#include "ʵ��1_310Doc.h"
#include "ʵ��1_310View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��1_310View

IMPLEMENT_DYNCREATE(Cʵ��1_310View, CView)

BEGIN_MESSAGE_MAP(Cʵ��1_310View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cʵ��1_310View ����/����

Cʵ��1_310View::Cʵ��1_310View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��1_310View::~Cʵ��1_310View()
{
}

BOOL Cʵ��1_310View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��1_310View ����

void Cʵ��1_310View::OnDraw(CDC* pDC)
{
	Cʵ��1_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
    CString S1;
	pDC->TextOutW(100, 200, S1);
	CString S2;
	pDC->TextOutW(100, 200, S2);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��1_310View ��ӡ

BOOL Cʵ��1_310View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��1_310View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��1_310View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��1_310View ���

#ifdef _DEBUG
void Cʵ��1_310View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��1_310View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��1_310Doc* Cʵ��1_310View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��1_310Doc)));
	return (Cʵ��1_310Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��1_310View ��Ϣ�������


void Cʵ��1_310View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��1_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S1 = _T("�����������");
	CClientDC dc(this);
    dc.TextOutW(100, 200, S1);
	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��1_310View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��1_310Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString S2 = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(100, 200, S2);
	CView::OnLButtonUp(nFlags, point);
}
