
// ��11�ܿ���ʵ��View.cpp : C��11�ܿ���ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��11�ܿ���ʵ��.h"
#endif

#include "��11�ܿ���ʵ��Set.h"
#include "��11�ܿ���ʵ��Doc.h"
#include "��11�ܿ���ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11�ܿ���ʵ��View

IMPLEMENT_DYNCREATE(C��11�ܿ���ʵ��View, CRecordView)

BEGIN_MESSAGE_MAP(C��11�ܿ���ʵ��View, CRecordView)
END_MESSAGE_MAP()

// C��11�ܿ���ʵ��View ����/����

C��11�ܿ���ʵ��View::C��11�ܿ���ʵ��View()
	: CRecordView(IDD_MY11_FORM)
	, column1(0)
	, column2(_T(""))
	, column3(0)
	, column4(_T(""))
	, column5(_T(""))
	, column6(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C��11�ܿ���ʵ��View::~C��11�ܿ���ʵ��View()
{
}

void C��11�ܿ���ʵ��View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
}

BOOL C��11�ܿ���ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��11�ܿ���ʵ��View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��11�ܿ���ʵ��Set;
	CRecordView::OnInitialUpdate();

}


// C��11�ܿ���ʵ��View ���

#ifdef _DEBUG
void C��11�ܿ���ʵ��View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��11�ܿ���ʵ��View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��11�ܿ���ʵ��Doc* C��11�ܿ���ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��11�ܿ���ʵ��Doc)));
	return (C��11�ܿ���ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��11�ܿ���ʵ��View ���ݿ�֧��
CRecordset* C��11�ܿ���ʵ��View::OnGetRecordset()
{
	return m_pSet;
}



// C��11�ܿ���ʵ��View ��Ϣ�������
