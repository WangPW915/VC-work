
// ʵ��3_317View.cpp : Cʵ��3_317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3_317.h"
#endif

#include "ʵ��3_317Doc.h"
#include "ʵ��3_317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��3_317View

IMPLEMENT_DYNCREATE(Cʵ��3_317View, CView)

BEGIN_MESSAGE_MAP(Cʵ��3_317View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cʵ��3_317View ����/����

Cʵ��3_317View::Cʵ��3_317View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��3_317View::~Cʵ��3_317View()
{
}

BOOL Cʵ��3_317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��3_317View ����

void Cʵ��3_317View::OnDraw(CDC* pDC)
{
	Cʵ��3_317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (pDoc->set)
	{

		SetTimer(0, 200, NULL);
		pDoc->set = false;

	}

	pDC->Ellipse(pDoc->re);

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��3_317View ��ӡ

BOOL Cʵ��3_317View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��3_317View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��3_317View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��3_317View ���

#ifdef _DEBUG
void Cʵ��3_317View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��3_317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��3_317Doc* Cʵ��3_317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��3_317Doc)));
	return (Cʵ��3_317Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��3_317View ��Ϣ�������


void Cʵ��3_317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��3_317Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);

	if (pDoc->flag == 0 && pDoc->re.bottom < (cr.bottom - cr.top))
	{
		pDoc->re.top += 10;
		pDoc->re.bottom += 10;
	}
	else pDoc->flag += 1;
	if (pDoc->flag >= 1 && (pDoc->re.top>0))
	{

		pDoc->re.top -= 10;
		pDoc->re.bottom -= 10;

	}
	else pDoc->flag = 0;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
