
// 413_test4View.cpp : CMy413_test4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "413_test4.h"
#endif

#include "413_test4Doc.h"
#include "413_test4View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test4View

IMPLEMENT_DYNCREATE(CMy413_test4View, CView)

BEGIN_MESSAGE_MAP(CMy413_test4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy413_test4View::OnPopout)
END_MESSAGE_MAP()

// CMy413_test4View ����/����

CMy413_test4View::CMy413_test4View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy413_test4View::~CMy413_test4View()
{
}

BOOL CMy413_test4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy413_test4View ����

void CMy413_test4View::OnDraw(CDC* /*pDC*/)
{
	CMy413_test4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy413_test4View ��ӡ

BOOL CMy413_test4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy413_test4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy413_test4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy413_test4View ���

#ifdef _DEBUG
void CMy413_test4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test4Doc* CMy413_test4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test4Doc)));
	return (CMy413_test4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test4View ��Ϣ�������


void CMy413_test4View::OnPopout()
{
	// TODO:  �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString A, C;
		int B;
		A = dlg.s1;
		B = dlg.s2;
		C = dlg.s3;
	}
}
