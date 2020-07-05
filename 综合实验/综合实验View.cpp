
// �ۺ�ʵ��View.cpp : C�ۺ�ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��.h"
#endif

#include "�ۺ�ʵ��Set.h"
#include "�ۺ�ʵ��Doc.h"
#include "�ۺ�ʵ��View.h"
#include"query.h"
#include"alter.h"
#include"pic.h"
#include"tra.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��View, CRecordView)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ��View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��View::OnRecordLast)
	ON_COMMAND(ID_32771, &C�ۺ�ʵ��View::Query)
	ON_COMMAND(ID_32772, &C�ۺ�ʵ��View::order)
	ON_COMMAND(ID_32773, &C�ۺ�ʵ��View::Traverse)
	ON_BN_CLICKED(IDC_BUTTON2, &C�ۺ�ʵ��View::Delete)
	ON_BN_CLICKED(IDC_BUTTON3, &C�ۺ�ʵ��View::Add)
	ON_BN_CLICKED(IDC_BUTTON4, &C�ۺ�ʵ��View::Update)
END_MESSAGE_MAP()

// C�ۺ�ʵ��View ����/����

C�ۺ�ʵ��View::C�ۺ�ʵ��View()
	: CRecordView(IDD_MY_FORM)
	, c1(_T(""))
	, c2(_T(""))
	, c3(_T(""))
	, c4(_T(""))
	, c5(_T(""))
	, c6(_T(""))
	, c7(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C�ۺ�ʵ��View::~C�ۺ�ʵ��View()
{
}

void C�ۺ�ʵ��View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL C�ۺ�ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��View ���

#ifdef _DEBUG
void C�ۺ�ʵ��View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��Doc* C�ۺ�ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��Doc)));
	return (C�ۺ�ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��View ���ݿ�֧��
CRecordset* C�ۺ�ʵ��View::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��View ��Ϣ�������

void C�ۺ�ʵ��View::draw_pic(CString path)
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CImage img;
	img.Load(path);
	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}

void C�ۺ�ʵ��View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString s;
	s = m_pSet->column8;
	filepath = _T("E:\\") + s;
	draw_pic(filepath);
}


void C�ۺ�ʵ��View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	pic dlg;
	
	CString s = m_pSet->column8;
	dlg.path =_T("E:\\") + s;
	dlg.DoModal();
}


void C�ۺ�ʵ��View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	Invalidate(true);
	UpdateData(false);
}


void C�ۺ�ʵ��View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	Invalidate(true);
	UpdateData(false);
}


void C�ۺ�ʵ��View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	Invalidate(true);
	UpdateData(false);
}


void C�ۺ�ʵ��View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	Invalidate(true);
	UpdateData(false);
}


void C�ۺ�ʵ��View::Query()
{
	// TODO: �ڴ���������������
	query dlg;
	int r = dlg.DoModal();
	if (r = IDOK)
	{
		m_pSet->m_strFilter = dlg.where;
		m_pSet->Requery();
		Invalidate(true);
		UpdateData(false);
	}
}


void C�ۺ�ʵ��View::order()
{
	// TODO: �ڴ���������������
	query dlg;
	int r = dlg.DoModal();
	if (r = IDOK)
	{
		m_pSet->m_strSort= dlg.where;
		m_pSet->Requery();
		Invalidate(true);
		UpdateData(false);
	}
}


void C�ۺ�ʵ��View::Traverse()
{
	// TODO: �ڴ���������������
	
	int n=m_pSet->GetODBCFieldCount();
	CString str=_T("");
	CString s = _T("");
	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())
	{
		for (int i = 0; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, s);
			str = str +s+ _T(" ");
		}
		str = str + _T("\r\n");
		m_pSet->MoveNext();
	}
	tra dlg;
	dlg.ss = str;
	dlg.DoModal();
}


void C�ۺ�ʵ��View::Delete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	Invalidate(true);
	UpdateData(false);
}


void C�ۺ�ʵ��View::Add()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	alter dlg;
	int r = dlg.DoModal();
	if (r = IDOK)
	{
		m_pSet->AddNew();
		m_pSet->column1 = dlg.Sname;
		m_pSet->column2 = dlg.Sno;
		m_pSet->column3 = dlg.Smajor;
		m_pSet->column4 = dlg.Ssex;
		m_pSet->column5 = dlg.Sbirth;
		m_pSet->column6 = dlg.Sphone;
		m_pSet->column7 = dlg.Saddress;
		m_pSet->column8 = dlg.Spath;
		m_pSet->Update();
		UpdateData(false);
	}
}


void C�ۺ�ʵ��View::Update()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	alter dlg;
	int r = dlg.DoModal();
	if (r = IDOK)
	{
		m_pSet->Edit();
		m_pSet->column1 = dlg.Sname;
		m_pSet->column2 = dlg.Sno;
		m_pSet->column3 = dlg.Smajor;
		m_pSet->column4 = dlg.Ssex;
		m_pSet->column5 = dlg.Sbirth;
		m_pSet->column6 = dlg.Sphone;
		m_pSet->column7 = dlg.Saddress;
		m_pSet->column8 = dlg.Spath;
		m_pSet->Update();
		UpdateData(false);
	}
}
