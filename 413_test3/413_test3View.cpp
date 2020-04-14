
// 413_test3View.cpp : CMy413_test3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "413_test3.h"
#endif

#include "413_test3Doc.h"
#include "413_test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy413_test3View

IMPLEMENT_DYNCREATE(CMy413_test3View, CView)

BEGIN_MESSAGE_MAP(CMy413_test3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy413_test3View ����/����

CMy413_test3View::CMy413_test3View()
{
	// TODO:  �ڴ˴���ӹ������
	flag = 0;
	satus = 0;
	set = true;
	cr.left = 200;
	cr.top = 300;
	cr.right = 220;
	cr.bottom = 320;
}

CMy413_test3View::~CMy413_test3View()
{
}

BOOL CMy413_test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy413_test3View ����

void CMy413_test3View::OnDraw(CDC* pDC)
{
	CMy413_test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set)
	{
		SetTimer(0, 200, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMy413_test3View ��ӡ

BOOL CMy413_test3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy413_test3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy413_test3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy413_test3View ���

#ifdef _DEBUG
void CMy413_test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy413_test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy413_test3Doc* CMy413_test3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy413_test3Doc)));
	return (CMy413_test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy413_test3View ��Ϣ�������


void CMy413_test3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect re;
	GetClientRect(&re);
	if (satus == 1)
	{
		if (flag == 0 && cr.right < (re.right - re.left))
		{
			cr.left += 10;
			cr.right += 10;
		}
		else flag += 1;
		if (flag >= 1 && cr.left>0)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		else flag = 0;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}




void CMy413_test3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	satus = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy413_test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	satus = 1;
	CView::OnLButtonDown(nFlags, point);
}
