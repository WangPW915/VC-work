
// test3_16View.cpp : Ctest3_16View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test3_16.h"
#endif

#include "test3_16Doc.h"
#include "test3_16View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest3_16View

IMPLEMENT_DYNCREATE(Ctest3_16View, CView)

BEGIN_MESSAGE_MAP(Ctest3_16View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Ctest3_16View ����/����

Ctest3_16View::Ctest3_16View()
{
	// TODO:  �ڴ˴���ӹ������

}

Ctest3_16View::~Ctest3_16View()
{
}

BOOL Ctest3_16View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest3_16View ����

void Ctest3_16View::OnDraw(CDC* /*pDC*/)
{
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest3_16View ��ӡ

BOOL Ctest3_16View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Ctest3_16View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Ctest3_16View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Ctest3_16View ���

#ifdef _DEBUG
void Ctest3_16View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest3_16View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest3_16Doc* Ctest3_16View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest3_16Doc)));
	return (Ctest3_16Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest3_16View ��Ϣ�������


void Ctest3_16View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetCapture();
	pDoc->A.left = point.x;
	pDoc->A.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Ctest3_16View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ctest3_16Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	ReleaseCapture();
	pDoc->A.right = point.x;
	pDoc->A.bottom = point.y;
	CClientDC dc(this);
	dc.Rectangle(pDoc->A.left, pDoc->A.top,pDoc->A.right,pDoc->A.bottom);
	CView::OnLButtonUp(nFlags, point);
}



void Ctest3_16View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC clientDC(this);
	CString s;
	s.Format(_T("X:%d Y:%d"), point.x, point.y);
	CView::OnMouseMove(nFlags, point);
}
