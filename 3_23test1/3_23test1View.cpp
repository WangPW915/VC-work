
// 3_23test1View.cpp : CMy3_23test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_23test1.h"
#endif

#include "3_23test1Doc.h"
#include "3_23test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_23test1View

IMPLEMENT_DYNCREATE(CMy3_23test1View, CView)

BEGIN_MESSAGE_MAP(CMy3_23test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_Circlechange, &CMy3_23test1View::OnCirclechange)
END_MESSAGE_MAP()

// CMy3_23test1View ����/����

CMy3_23test1View::CMy3_23test1View()
{
	// TODO:  �ڴ˴���ӹ������
	x = 707; y = 298;
	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CMy3_23test1View::~CMy3_23test1View()
{
}

BOOL CMy3_23test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_23test1View ����

void CMy3_23test1View::OnDraw(CDC* pDC)
{
	CMy3_23test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3_23test1View ��ӡ

BOOL CMy3_23test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_23test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_23test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_23test1View ���

#ifdef _DEBUG
void CMy3_23test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_23test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_23test1Doc* CMy3_23test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_23test1Doc)));
	return (CMy3_23test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_23test1View ��Ϣ�������


void CMy3_23test1View::OnCirclechange()
{
	CClientDC dc(this);
	for (int i = 0; i < 2 * y; i = rect.bottom)
	{

		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;


		Invalidate();
		dc.Ellipse(rect);
	}
	// TODO:  �ڴ���������������
}
