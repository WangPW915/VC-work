
// 420_test2_4View.cpp : CMy420_test2_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "420_test2_4.h"
#endif

#include "420_test2_4Doc.h"
#include "420_test2_4View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_4View

IMPLEMENT_DYNCREATE(CMy420_test2_4View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_4View, CView)
	ON_COMMAND(ID_POPOUT, &CMy420_test2_4View::OnPopout)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy420_test2_4View ����/����

CMy420_test2_4View::CMy420_test2_4View()
{
	// TODO:  �ڴ˴���ӹ������
	r = g = b = 0;
}

CMy420_test2_4View::~CMy420_test2_4View()
{
}

BOOL CMy420_test2_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_4View ����

void CMy420_test2_4View::OnDraw(CDC* /*pDC*/)
{
	CMy420_test2_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy420_test2_4View ���

#ifdef _DEBUG
void CMy420_test2_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_4Doc* CMy420_test2_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_4Doc)));
	return (CMy420_test2_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_4View ��Ϣ�������


void CMy420_test2_4View::OnPopout()
{
	// TODO:  �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		r = dlg.R;
		g = dlg.G;
		b = dlg.B;

	}
	CClientDC dc(this);
	CPen newpen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *oldpen = dc.SelectObject(&newpen);

	//dc.SelectObject(oldpen);
	dc.Ellipse(cr);
	CBrush newbrush(RGB(r, g, b));
	CBrush *oldbrush = dc.SelectObject(&newbrush);
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);
}


void CMy420_test2_4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
