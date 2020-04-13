
// ʵ��2_317View.cpp : Cʵ��2_317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2_317.h"
#endif

#include "ʵ��2_317Doc.h"
#include "ʵ��2_317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��2_317View

IMPLEMENT_DYNCREATE(Cʵ��2_317View, CView)

BEGIN_MESSAGE_MAP(Cʵ��2_317View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cʵ��2_317View ����/����

Cʵ��2_317View::Cʵ��2_317View()
{
	// TODO:  �ڴ˴���ӹ������

}

Cʵ��2_317View::~Cʵ��2_317View()
{
}

BOOL Cʵ��2_317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��2_317View ����

void Cʵ��2_317View::OnDraw(CDC* pDC)
{
	Cʵ��2_317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->m_crlRect);
}


// Cʵ��2_317View ��ӡ

BOOL Cʵ��2_317View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��2_317View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��2_317View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// Cʵ��2_317View ���

#ifdef _DEBUG
void Cʵ��2_317View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��2_317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��2_317Doc* Cʵ��2_317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��2_317Doc)));
	return (Cʵ��2_317Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��2_317View ��Ϣ�������


void Cʵ��2_317View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��2_317Doc* pDoc = GetDocument();

	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlRect.left > 0)
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);//�ػ�
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
