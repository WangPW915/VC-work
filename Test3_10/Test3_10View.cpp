
// Test3_10View.cpp : CTest3_10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Test3_10.h"
#endif

#include "Test3_10Doc.h"
#include "Test3_10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest3_10View

IMPLEMENT_DYNCREATE(CTest3_10View, CView)

BEGIN_MESSAGE_MAP(CTest3_10View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CTest3_10View ����/����

CTest3_10View::CTest3_10View()
{
	// TODO:  �ڴ˴���ӹ������

	ca.SetSize(256);
}

CTest3_10View::~CTest3_10View()
{
}

BOOL CTest3_10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CTest3_10View ����

void CTest3_10View::OnDraw(CDC* pDC)
{
	CTest3_10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���

	//���λ�ô���
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));//����Բ
}


// CTest3_10View ��ӡ

BOOL CTest3_10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CTest3_10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CTest3_10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CTest3_10View ���

#ifdef _DEBUG
void CTest3_10View::AssertValid() const
{
	CView::AssertValid();
}

void CTest3_10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest3_10Doc* CTest3_10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest3_10Doc)));
	return (CTest3_10Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest3_10View ��Ϣ�������


void CTest3_10View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int a = rand() % 50 + 5;
	int b = rand() % 100 +1;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	ca.Add(cr);
	this->Invalidate();

   // CClientDC dc(this);
	//dc.Ellipse(cr);//����Բ

	CView::OnLButtonDown(nFlags, point);
}
