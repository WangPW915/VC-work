
// 3_23test2View.cpp : CMy3_23test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3_23test2.h"
#endif

#include "3_23test2Doc.h"
#include "3_23test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3_23test2View

IMPLEMENT_DYNCREATE(CMy3_23test2View, CView)

BEGIN_MESSAGE_MAP(CMy3_23test2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_Colorcirclechange, &CMy3_23test2View::OnColorcirclechange)
END_MESSAGE_MAP()

// CMy3_23test2View ����/����

CMy3_23test2View::CMy3_23test2View()
{
	// TODO:  �ڴ˴���ӹ������
	x = 707; y = 298;
	red = 0; green = 0; blue = 0;

	rect.left = x - 10; rect.top = y - 10;
	rect.right = x + 10; rect.bottom = y + 10;
}

CMy3_23test2View::~CMy3_23test2View()
{
}

BOOL CMy3_23test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3_23test2View ����

void CMy3_23test2View::OnDraw(CDC* pDC)
{
	CMy3_23test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3_23test2View ��ӡ

BOOL CMy3_23test2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3_23test2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3_23test2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy3_23test2View ���

#ifdef _DEBUG
void CMy3_23test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3_23test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3_23test2Doc* CMy3_23test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3_23test2Doc)));
	return (CMy3_23test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3_23test2View ��Ϣ�������

void CMy3_23test2View::OnColorcirclechange()
{
	// TODO:  �ڴ���������������
	CClientDC dc(this);
	for (int i = 0; i<2 * y; i = rect.bottom)
	{

		red += 15;
		green += 10;
		blue += 8;
		color = RGB(red, green, blue);
		rect.left -= 1;
		rect.top -= 1;
		rect.right += 1;
		rect.bottom += 1;
		CBrush newBrush(color);
		CBrush *oldBrush = dc.SelectObject(&newBrush);

		dc.Ellipse(rect);
		dc.SelectObject(oldBrush);


		Invalidate();

	}
}
