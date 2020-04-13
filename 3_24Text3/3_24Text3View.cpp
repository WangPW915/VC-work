
// 3_24Text3View.cpp : CMy3_24Text3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_24Text3.h"
#endif

#include "3_24Text3Doc.h"
#include "3_24Text3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_24Text3View

IMPLEMENT_DYNCREATE(CMy3_24Text3View, CView)

BEGIN_MESSAGE_MAP(CMy3_24Text3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAWLINE, &CMy3_24Text3View::OnDrawline)
	ON_COMMAND(ID_DRAWRECTANGLE, &CMy3_24Text3View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &CMy3_24Text3View::OnDrawellipse)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy3_24Text3View ����/����

CMy3_24Text3View::CMy3_24Text3View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy3_24Text3View::~CMy3_24Text3View()
{
}

BOOL CMy3_24Text3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_24Text3View ����

void CMy3_24Text3View::OnDraw(CDC* pDC)
{
	CMy3_24Text3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3_24Text3View ��ӡ

BOOL CMy3_24Text3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_24Text3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_24Text3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_24Text3View ���

#ifdef _DEBUG
void CMy3_24Text3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_24Text3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_24Text3Doc* CMy3_24Text3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_24Text3Doc)));
	return (CMy3_24Text3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_24Text3View ��Ϣ�������


void CMy3_24Text3View::OnDrawline()
{
	// TODO:  �ڴ���������������

	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 1;

}


void CMy3_24Text3View::OnDrawrectangle()
{
	// TODO:  �ڴ���������������
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 2;
}


void CMy3_24Text3View::OnDrawellipse()
{
	// TODO:  �ڴ���������������
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->flag = 3;
}


void CMy3_24Text3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy3_24Text3Doc* pDoc = GetDocument();

	pDoc->m_point = point;

	CView::OnMouseMove(nFlags, point);
}


void CMy3_24Text3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	CMy3_24Text3Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMy3_24Text3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	CMy3_24Text3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m_point = point;
	dc.MoveTo(pDoc->m_point);
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	InvalidateRect(NULL, TRUE);

	CView::OnLButtonUp(nFlags, point);
}
