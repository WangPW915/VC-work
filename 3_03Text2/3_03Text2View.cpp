
// 3_03Text2View.cpp : CMy3_03Text2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_03Text2.h"
#endif

#include "3_03Text2Doc.h"
#include "3_03Text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_03Text2View

IMPLEMENT_DYNCREATE(CMy3_03Text2View, CView)

BEGIN_MESSAGE_MAP(CMy3_03Text2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy3_03Text2View ����/����

CMy3_03Text2View::CMy3_03Text2View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy3_03Text2View::~CMy3_03Text2View()
{
}

BOOL CMy3_03Text2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_03Text2View ����

void CMy3_03Text2View::OnDraw(CDC* pDC)
{
	CMy3_03Text2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200, pDoc->S);
	pDC->TextOutW(100, 100, pDoc->s);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3_03Text2View ��ӡ

BOOL CMy3_03Text2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_03Text2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_03Text2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_03Text2View ���

#ifdef _DEBUG
void CMy3_03Text2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_03Text2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_03Text2Doc* CMy3_03Text2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_03Text2Doc)));
	return (CMy3_03Text2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_03Text2View ��Ϣ�������
