// query.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��.h"
#include "query.h"
#include "afxdialogex.h"


// query �Ի���

IMPLEMENT_DYNAMIC(query, CDialogEx)

query::query(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, where(_T(""))
{

}

query::~query()
{
}

void query::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, where);
}


BEGIN_MESSAGE_MAP(query, CDialogEx)
END_MESSAGE_MAP()


// query ��Ϣ�������
