// tra.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��.h"
#include "tra.h"
#include "afxdialogex.h"


// tra �Ի���

IMPLEMENT_DYNAMIC(tra, CDialogEx)

tra::tra(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	, ss(_T(""))
{

}

tra::~tra()
{
}

void tra::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ss);
}


BEGIN_MESSAGE_MAP(tra, CDialogEx)
END_MESSAGE_MAP()


// tra ��Ϣ�������
