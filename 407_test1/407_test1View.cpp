
// 407_test1View.cpp : CMy407_test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "407_test1.h"
#endif

#include "407_test1Doc.h"
#include "407_test1View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy407_test1View

IMPLEMENT_DYNCREATE(CMy407_test1View, CView)

BEGIN_MESSAGE_MAP(CMy407_test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy407_test1View::OnPopout)
END_MESSAGE_MAP()

// CMy407_test1View ����/����

CMy407_test1View::CMy407_test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy407_test1View::~CMy407_test1View()
{
}

BOOL CMy407_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy407_test1View ����

void CMy407_test1View::OnDraw(CDC* pDC)
{
	CMy407_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy407_test1View ��ӡ

BOOL CMy407_test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy407_test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy407_test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy407_test1View ���

#ifdef _DEBUG
void CMy407_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy407_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy407_test1Doc* CMy407_test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy407_test1Doc)));
	return (CMy407_test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy407_test1View ��Ϣ�������


void CMy407_test1View::OnPopout()
{
	// TODO:  �ڴ���������������
	CMy407_test1Doc* pDoc = GetDocument();
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s;
		s = dlg.S;
		GetDC()->TextOutW(200, 300, s);
	}
}
