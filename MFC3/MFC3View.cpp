
// MFC3View.cpp : CMFC3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC3.h"
#endif

#include "MFC3Doc.h"
#include "MFC3View.h"
#include "week10ʵ���ʵ��3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC3View

IMPLEMENT_DYNCREATE(CMFC3View, CView)

BEGIN_MESSAGE_MAP(CMFC3View, CView)
END_MESSAGE_MAP()

// CMFC3View ����/����

CMFC3View::CMFC3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC3View::~CMFC3View()
{
}

BOOL CMFC3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC3View ����

void CMFC3View::OnDraw(CDC* pDC)
{
	CMFC3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s1;
	FAC f;
	s1.Format(_T("%f"), f.convert(30.0));
	pDC->TextOutW(200, 200, s1);
	CString s2;
	s2.Format(_T("%d"), factorial(5));
	pDC->TextOutW(200, 230, s2);
}


// CMFC3View ���

#ifdef _DEBUG
void CMFC3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC3Doc* CMFC3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC3Doc)));
	return (CMFC3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC3View ��Ϣ�������
