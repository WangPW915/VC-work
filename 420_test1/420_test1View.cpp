
// 420_test1View.cpp : CMy420_test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "420_test1.h"
#endif

#include "420_test1Doc.h"
#include "420_test1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy420_test1View

IMPLEMENT_DYNCREATE(CMy420_test1View, CView)

BEGIN_MESSAGE_MAP(CMy420_test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy420_test1View::OnPopout)
END_MESSAGE_MAP()

// CMy420_test1View ����/����

CMy420_test1View::CMy420_test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy420_test1View::~CMy420_test1View()
{
}

BOOL CMy420_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy420_test1View ����

void CMy420_test1View::OnDraw(CDC* /*pDC*/)
{
	CMy420_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy420_test1View ��ӡ

BOOL CMy420_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy420_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy420_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy420_test1View ���

#ifdef _DEBUG
void CMy420_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy420_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy420_test1Doc* CMy420_test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy420_test1Doc)));
	return (CMy420_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy420_test1View ��Ϣ�������


void CMy420_test1View::OnPopout()
{
	// TODO:  �ڴ���������������
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString a, b, c;
		a = dlg.A;
		b = dlg.B;
		c = dlg.C;
	}
}
