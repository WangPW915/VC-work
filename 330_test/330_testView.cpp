
// 330_testView.cpp : CMy330_testView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "330_test.h"
#endif

#include "330_testDoc.h"
#include "330_testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy330_testView

IMPLEMENT_DYNCREATE(CMy330_testView, CView)

BEGIN_MESSAGE_MAP(CMy330_testView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILEOPEN, &CMy330_testView::OnFileopen)
END_MESSAGE_MAP()

// CMy330_testView ����/����

CMy330_testView::CMy330_testView()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy330_testView::~CMy330_testView()
{
}

BOOL CMy330_testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy330_testView ����

void CMy330_testView::OnDraw(CDC* pDC)
{
	CMy330_testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy330_testView ��ӡ

BOOL CMy330_testView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy330_testView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy330_testView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy330_testView ���

#ifdef _DEBUG
void CMy330_testView::AssertValid() const
{
	CView::AssertValid();
}

void CMy330_testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy330_testDoc* CMy330_testView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy330_testDoc)));
	return (CMy330_testDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy330_testView ��Ϣ�������


void CMy330_testView::OnFileopen()
{
	// TODO:  �ڴ���������������
	CMy330_testDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 300, filename);
        
	}
}
