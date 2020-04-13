
// T_1View.cpp : CT_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "T_1.h"
#endif

#include "T_1Doc.h"
#include "T_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CT_1View

IMPLEMENT_DYNCREATE(CT_1View, CView)

BEGIN_MESSAGE_MAP(CT_1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CT_1View ����/����

CT_1View::CT_1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CT_1View::~CT_1View()
{
}

BOOL CT_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CT_1View ����

void CT_1View::OnDraw(CDC* /*pDC*/)
{
	CT_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CT_1View ��ӡ

BOOL CT_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CT_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CT_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CT_1View ���

#ifdef _DEBUG
void CT_1View::AssertValid() const
{
	CView::AssertValid();
}

void CT_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CT_1Doc* CT_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CT_1Doc)));
	return (CT_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CT_1View ��Ϣ�������


void CT_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	int r=0;
	if (cr.Height() > cr.Width())
		r = cr.Width() / 2;
	else 
		r = cr.Height() / 2;
	int x = cr.Width() / 2;
	int y = cr.Height() / 2;
	CClientDC dc(this);
	dc.Ellipse(x - r, y - r, x + r, y + r);

	CView::OnLButtonDown(nFlags, point);
}
