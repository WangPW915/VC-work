
// 413_test2View.cpp : CMy413_test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "413_test2.h"
#endif

#include "413_test2Doc.h"
#include "413_test2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test2View

IMPLEMENT_DYNCREATE(CMy413_test2View, CView)

BEGIN_MESSAGE_MAP(CMy413_test2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_Popout, &CMy413_test2View::OnPopout)
END_MESSAGE_MAP()

// CMy413_test2View ����/����

CMy413_test2View::CMy413_test2View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy413_test2View::~CMy413_test2View()
{
}

BOOL CMy413_test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy413_test2View ����

void CMy413_test2View::OnDraw(CDC* /*pDC*/)
{
	CMy413_test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy413_test2View ��ӡ

BOOL CMy413_test2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy413_test2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy413_test2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy413_test2View ���

#ifdef _DEBUG
void CMy413_test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test2Doc* CMy413_test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test2Doc)));
	return (CMy413_test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test2View ��Ϣ�������


void CMy413_test2View::OnPopout()
{
	// TODO:  �ڴ���������������
	MyDialog dlg;
	int r = dlg.DoModal(); 
	if (r == IDOK)
	{
		int A, B, C;
		A = dlg.a;
		B = dlg.b;
	}
}
