
// 3_24Text1View.cpp : CMy3_24Text1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_24Text1.h"
#endif

#include "3_24Text1Doc.h"
#include "3_24Text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_24Text1View

IMPLEMENT_DYNCREATE(CMy3_24Text1View, CView)

BEGIN_MESSAGE_MAP(CMy3_24Text1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SHOWNAME, &CMy3_24Text1View::OnShowname)
END_MESSAGE_MAP()

// CMy3_24Text1View ����/����

CMy3_24Text1View::CMy3_24Text1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy3_24Text1View::~CMy3_24Text1View()
{
}

BOOL CMy3_24Text1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_24Text1View ����

void CMy3_24Text1View::OnDraw(CDC* /*pDC*/)
{
	CMy3_24Text1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3_24Text1View ��ӡ

BOOL CMy3_24Text1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_24Text1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_24Text1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_24Text1View ���

#ifdef _DEBUG
void CMy3_24Text1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_24Text1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_24Text1Doc* CMy3_24Text1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_24Text1Doc)));
	return (CMy3_24Text1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_24Text1View ��Ϣ�������


void CMy3_24Text1View::OnShowname()
{
	// TODO:  �ڴ���������������
	CString s = _T("������");
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);
}
