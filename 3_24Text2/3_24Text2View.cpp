
// 3_24Text2View.cpp : CMy3_24Text2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_24Text2.h"
#endif

#include "3_24Text2Doc.h"
#include "3_24Text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_24Text2View

IMPLEMENT_DYNCREATE(CMy3_24Text2View, CView)

BEGIN_MESSAGE_MAP(CMy3_24Text2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy3_24Text2View ����/����

CMy3_24Text2View::CMy3_24Text2View()
{
	// TODO:  �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CMy3_24Text2View::~CMy3_24Text2View()
{
}

BOOL CMy3_24Text2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_24Text2View ����

void CMy3_24Text2View::OnDraw(CDC* pDC)
{
	CMy3_24Text2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMy3_24Text2View ��ӡ

BOOL CMy3_24Text2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_24Text2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_24Text2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_24Text2View ���

#ifdef _DEBUG
void CMy3_24Text2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_24Text2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_24Text2Doc* CMy3_24Text2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_24Text2Doc)));
	return (CMy3_24Text2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_24Text2View ��Ϣ�������
