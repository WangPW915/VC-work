
// week10View.cpp : Cweek10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10.h"
#endif

#include "week10Doc.h"
#include "week10View.h"
#include "w32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10View

IMPLEMENT_DYNCREATE(Cweek10View, CView)

BEGIN_MESSAGE_MAP(Cweek10View, CView)
END_MESSAGE_MAP()

// Cweek10View ����/����

Cweek10View::Cweek10View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek10View::~Cweek10View()
{
}

BOOL Cweek10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek10View ����

void Cweek10View::OnDraw(CDC* pDC)
{
	Cweek10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	T cc;
	s.Format(_T("%d"), cc.factorial(5));
	pDC->TextOutW(200, 300, s);
}


// Cweek10View ���

#ifdef _DEBUG
void Cweek10View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10Doc* Cweek10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10Doc)));
	return (Cweek10Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10View ��Ϣ�������
