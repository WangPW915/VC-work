
// 420_test2_1View.cpp : CMy420_test2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "420_test2_1.h"
#endif

#include "420_test2_1Doc.h"
#include "420_test2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_1View

IMPLEMENT_DYNCREATE(CMy420_test2_1View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy420_test2_1View ����/����

CMy420_test2_1View::CMy420_test2_1View()
{
	// TODO:  �ڴ˴���ӹ������
	flag = 0;
}

CMy420_test2_1View::~CMy420_test2_1View()
{
}

BOOL CMy420_test2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_1View ����

void CMy420_test2_1View::OnDraw(CDC* pDC)
{
	CMy420_test2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect cr(a, b);
	pDC->Ellipse(&cr);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy420_test2_1View ��ӡ

BOOL CMy420_test2_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy420_test2_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy420_test2_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy420_test2_1View ���

#ifdef _DEBUG
void CMy420_test2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_1Doc* CMy420_test2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_1Doc)));
	return (CMy420_test2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_1View ��Ϣ�������


void CMy420_test2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	a = point;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy420_test2_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CMy420_test2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	b = point;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
