
// 420_test2_2View.cpp : CMy420_test2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "420_test2_2.h"
#endif

#include "420_test2_2Doc.h"
#include "420_test2_2View.h"
#include "Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test2_2View

IMPLEMENT_DYNCREATE(CMy420_test2_2View, CView)

BEGIN_MESSAGE_MAP(CMy420_test2_2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy420_test2_2View::OnPopout)
END_MESSAGE_MAP()

// CMy420_test2_2View ����/����

CMy420_test2_2View::CMy420_test2_2View()
{
	// TODO:  �ڴ˴���ӹ������
	cr.left = 0;
	cr.top = 0;
	cr.right = 0;
	cr.bottom = 0;
}

CMy420_test2_2View::~CMy420_test2_2View()
{
}

BOOL CMy420_test2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy420_test2_2View ����

void CMy420_test2_2View::OnDraw(CDC* pDC)
{
	CMy420_test2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Ellipse(&cr);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy420_test2_2View ��ӡ

BOOL CMy420_test2_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy420_test2_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy420_test2_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy420_test2_2View ���

#ifdef _DEBUG
void CMy420_test2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test2_2Doc* CMy420_test2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test2_2Doc)));
	return (CMy420_test2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test2_2View ��Ϣ�������


void CMy420_test2_2View::OnPopout()
{
	// TODO:  �ڴ���������������
	Dlg1 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		UpdateData(true);
		cr.left = dlg.a;
		cr.top = dlg.b;
		cr.right = dlg.c;
		cr.bottom = dlg.d;

	}
	Invalidate();
}
