
// 330_Test1View.cpp : CMy330_Test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "330_Test1.h"
#endif

#include "330_Test1Doc.h"
#include "330_Test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy330_Test1View

IMPLEMENT_DYNCREATE(CMy330_Test1View, CView)

BEGIN_MESSAGE_MAP(CMy330_Test1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILEOPEN, &CMy330_Test1View::OnFileopen)
END_MESSAGE_MAP()

// CMy330_Test1View ����/����

CMy330_Test1View::CMy330_Test1View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy330_Test1View::~CMy330_Test1View()
{
}

BOOL CMy330_Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy330_Test1View ����

void CMy330_Test1View::OnDraw(CDC* pDC)
{
	CMy330_Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy330_Test1View ��ӡ

BOOL CMy330_Test1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy330_Test1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy330_Test1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMy330_Test1View ���

#ifdef _DEBUG
void CMy330_Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy330_Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy330_Test1Doc* CMy330_Test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy330_Test1Doc)));
	return (CMy330_Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy330_Test1View ��Ϣ�������


void CMy330_Test1View::OnFileopen()
{
	// TODO:  �ڴ���������������
	CMy330_Test1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(this->GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		dc.TextOutW(100, 100, filename);
	}
}
