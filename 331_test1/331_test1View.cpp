
// 331_test1View.cpp : CMy331_test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "331_test1.h"
#endif

#include "331_test1Doc.h"
#include "331_test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy331_test1View

IMPLEMENT_DYNCREATE(CMy331_test1View, CView)

BEGIN_MESSAGE_MAP(CMy331_test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy331_test1View ����/����

CMy331_test1View::CMy331_test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy331_test1View::~CMy331_test1View()
{
}

BOOL CMy331_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy331_test1View ����

void CMy331_test1View::OnDraw(CDC* pDC)
{
	CMy331_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(190, 190, 510, 500);
}


// CMy331_test1View ��ӡ

BOOL CMy331_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy331_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy331_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy331_test1View ���

#ifdef _DEBUG
void CMy331_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy331_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy331_test1Doc* CMy331_test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy331_test1Doc)));
	return (CMy331_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy331_test1View ��Ϣ�������


void CMy331_test1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CString ch;
	CClientDC dc(this);

	s.AppendChar(nChar);

	CRect Rect(200, 200, 500,500);

	ch.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200)
	{
		m = (x - 200) / 10 + (y - 200)/20*30;

		s.Insert(m, nChar);
	}
	else
		s.Append(ch); 

	dc.DrawText(s,Rect, DT_LEFT |DT_WORDBREAK|DT_EDITCONTROL );

	CView::OnChar(nChar, nRepCnt, nFlags);
}
