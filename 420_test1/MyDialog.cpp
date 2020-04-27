// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "420_test1.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(MyDialog::IDD, pParent)
	, a(0)
	, b(0)
	, c(0)
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &MyDialog::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDialog::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &MyDialog::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &MyDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &MyDialog::OnBnClickedButton6)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������


void MyDialog::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDialog::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float A = a;
	float B = b;
	c = a + b;
	float C = c;
	c.Format(_T("%lf"), C);
	UpdateData(false);
}


void MyDialog::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDialog::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDialog::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

void MyDialog::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDialog::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
