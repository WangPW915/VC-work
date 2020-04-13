
// 413_test1View.cpp : CMy413_test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "413_test1.h"
#endif

#include "413_test1Doc.h"
#include "413_test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test1View

IMPLEMENT_DYNCREATE(CMy413_test1View, CView)

BEGIN_MESSAGE_MAP(CMy413_test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy413_test1View ����/����

CMy413_test1View::CMy413_test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy413_test1View::~CMy413_test1View()
{
}

BOOL CMy413_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy413_test1View ����

void CMy413_test1View::OnDraw(CDC* pDC)
{
	CMy413_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	cr.left = x - 50;
	cr.top = y - 50;
	cr.right = x + 50;
	cr.bottom = y + 40;

	pDC->Rectangle(cr);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy413_test1View ��ӡ

BOOL CMy413_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy413_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy413_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy413_test1View ���

#ifdef _DEBUG
void CMy413_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test1Doc* CMy413_test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test1Doc)));
	return (CMy413_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test1View ��Ϣ�������


void CMy413_test1View::OnMouseMove(UINT nFlags, CPoint point)
{
	CMy413_test1Doc* pDoc = GetDocument();
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (flag >= 1)
	{
		x = point.x;
		y = point.y;

		Invalidate();
	}
    CView::OnMouseMove(nFlags, point);

}


void CMy413_test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	flag = 0;
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;

	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}


void CMy413_test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;
	CView::OnLButtonDown(nFlags, point);
}
