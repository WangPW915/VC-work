
// 3_03Text1View.cpp : CMy3_03Text1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_03Text1.h"
#endif

#include "3_03Text1Doc.h"
#include "3_03Text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_03Text1View

IMPLEMENT_DYNCREATE(CMy3_03Text1View, CView)

BEGIN_MESSAGE_MAP(CMy3_03Text1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy3_03Text1View ����/����

CMy3_03Text1View::CMy3_03Text1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy3_03Text1View::~CMy3_03Text1View()
{
}

BOOL CMy3_03Text1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_03Text1View ����

void CMy3_03Text1View::OnDraw(CDC* pDC)
{
	CMy3_03Text1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	CString S = _T("����*****");
	int b = pDoc->A;
	CString s;
	s.Format(_T("%d"), b);
	pDC->TextOutW(200, 300, s);
	pDC->TextOutW(100, 200, S);
}


// CMy3_03Text1View ��ӡ

BOOL CMy3_03Text1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_03Text1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_03Text1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_03Text1View ���

#ifdef _DEBUG
void CMy3_03Text1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_03Text1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_03Text1Doc* CMy3_03Text1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_03Text1Doc)));
	return (CMy3_03Text1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_03Text1View ��Ϣ�������
