
// week10.2View.cpp : Cweek102View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10.2.h"
#endif

#include "week10.2Doc.h"
#include "week10.2View.h"
#include "win32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek102View

IMPLEMENT_DYNCREATE(Cweek102View, CView)

BEGIN_MESSAGE_MAP(Cweek102View, CView)
END_MESSAGE_MAP()

// Cweek102View ����/����

Cweek102View::Cweek102View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek102View::~Cweek102View()
{
}

BOOL Cweek102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek102View ����

void Cweek102View::OnDraw(CDC* pDC)
{
	Cweek102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	FAC f;
	s.Format(_T("%f"), f.convert(30.0));
	pDC->TextOutW(300, 300, s);

}


// Cweek102View ���

#ifdef _DEBUG
void Cweek102View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek102Doc* Cweek102View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek102Doc)));
	return (Cweek102Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek102View ��Ϣ�������
