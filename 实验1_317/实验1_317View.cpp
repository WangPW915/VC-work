
// ʵ��1_317View.cpp : Cʵ��1_317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1_317.h"
#endif

#include "ʵ��1_317Doc.h"
#include "ʵ��1_317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��1_317View

IMPLEMENT_DYNCREATE(Cʵ��1_317View, CView)

BEGIN_MESSAGE_MAP(Cʵ��1_317View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cʵ��1_317View ����/����

Cʵ��1_317View::Cʵ��1_317View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��1_317View::~Cʵ��1_317View()
{
}

BOOL Cʵ��1_317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��1_317View ����

void Cʵ��1_317View::OnDraw(CDC* pDC)
{
	Cʵ��1_317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��1_317View ��ӡ

BOOL Cʵ��1_317View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��1_317View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��1_317View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��1_317View ���

#ifdef _DEBUG
void Cʵ��1_317View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��1_317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��1_317Doc* Cʵ��1_317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��1_317Doc)));
	return (Cʵ��1_317Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��1_317View ��Ϣ�������


void Cʵ��1_317View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��1_317Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	InvalidateRect(NULL, FALSE);
	CView::OnMouseMove(nFlags, point);
}
