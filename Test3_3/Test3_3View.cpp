
// Test3_3View.cpp : CTest3_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Test3_3.h"
#endif

#include "Test3_3Doc.h"
#include "Test3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest3_3View

IMPLEMENT_DYNCREATE(CTest3_3View, CView)

BEGIN_MESSAGE_MAP(CTest3_3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONDOWN()
//ON_WM_LBUTTONDBLCLK()
ON_WM_RBUTTONDOWN()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CTest3_3View ����/����

CTest3_3View::CTest3_3View()
{
	// TODO:  �ڴ˴���ӹ������

}

CTest3_3View::~CTest3_3View()
{
}

BOOL CTest3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CTest3_3View ����

void CTest3_3View::OnDraw(CDC* pDC)
{
	CTest3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���


}


// CTest3_3View ��ӡ

BOOL CTest3_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CTest3_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CTest3_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CTest3_3View ���

#ifdef _DEBUG
void CTest3_3View::AssertValid() const
{
	CView::AssertValid();
}

void CTest3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest3_3Doc* CTest3_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest3_3Doc)));
	return (CTest3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest3_3View ��Ϣ�������



void CTest3_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	CTest3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString m;
	m.Format(_T("%d"), pDoc->count);
	dc.TextOutW(400, 400, m);
	CView::OnRButtonDown(nFlags, point);
}

void CTest3_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CTest3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}
