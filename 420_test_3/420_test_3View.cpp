
// 420_test_3View.cpp : CMy420_test_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "420_test_3.h"
#endif

#include "420_test_3Doc.h"
#include "420_test_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test_3View

IMPLEMENT_DYNCREATE(CMy420_test_3View, CView)

BEGIN_MESSAGE_MAP(CMy420_test_3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy420_test_3View ����/����

CMy420_test_3View::CMy420_test_3View()
{
	// TODO:  �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 300;
	cr.right = 400;
	cr.bottom = 500;
}

CMy420_test_3View::~CMy420_test_3View()
{
}

BOOL CMy420_test_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy420_test_3View ����

void CMy420_test_3View::OnDraw(CDC* pDC)
{
	CMy420_test_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(&cr);
}


// CMy420_test_3View ��ӡ

BOOL CMy420_test_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy420_test_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy420_test_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy420_test_3View ���

#ifdef _DEBUG
void CMy420_test_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test_3Doc* CMy420_test_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test_3Doc)));
	return (CMy420_test_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test_3View ��Ϣ�������


void CMy420_test_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);

	CPen newpen(PS_DASH, 1, RGB(200, 100, 100));
	CPen *oldpen = dc.SelectObject(&newpen);

	dc.Rectangle(100, 300, 400, 500);
	dc.Ellipse(100, 300, 400, 500);

	dc.SelectObject(oldpen);
	CView::OnLButtonDown(nFlags, point);
}
