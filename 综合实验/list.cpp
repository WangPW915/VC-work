// list.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ۺ�ʵ��.h"
#include "list.h"
#include "afxdialogex.h"


// list �Ի���

IMPLEMENT_DYNAMIC(list, CDialogEx)

list::list(CWnd* pParent /*=NULL*/)
	:ss(_T(""))
{

}

list::~list()
{
}

void list::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ss);
	DDX_Control(pDX, IDC_EDIT1, str);
}


BEGIN_MESSAGE_MAP(list, CDialogEx)
END_MESSAGE_MAP()


// list ��Ϣ�������


BOOL list::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
