
// 407_test2View.cpp : CMy407_test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "407_test2.h"
#endif

#include "407_test2Doc.h"
#include "407_test2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy407_test2View

IMPLEMENT_DYNCREATE(CMy407_test2View, CView)

BEGIN_MESSAGE_MAP(CMy407_test2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
    ON_COMMAND(ID_POPOUT, &CMy407_test2View::OnPopout)
END_MESSAGE_MAP()

// CMy407_test2View ����/����

CMy407_test2View::CMy407_test2View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy407_test2View::~CMy407_test2View()
{
}

BOOL CMy407_test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy407_test2View ����

void CMy407_test2View::OnDraw(CDC* pDC)
{
	CMy407_test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy407_test2View ��ӡ

BOOL CMy407_test2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy407_test2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy407_test2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy407_test2View ���

#ifdef _DEBUG
void CMy407_test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy407_test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy407_test2Doc* CMy407_test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy407_test2Doc)));
	return (CMy407_test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy407_test2View ��Ϣ�������


 void CMy407_test2View::OnPopout()
{
	 CMy407_test2Doc* pDoc = GetDocument();
	 ASSERT_VALID(pDoc);
	 if (!pDoc)
		 return;
	// TODO:  �ڴ���������������
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		pDoc->S1 = dlg.s1;
		pDoc->S2 = dlg.s2;
		CClientDC dc(this);
		dc.TextOutW(200, 300, pDoc->S1);
		dc.TextOutW(300, 400, pDoc->S2);
	} 
}