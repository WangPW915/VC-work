// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "420_test1.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(MyDlg::IDD, pParent)
	, A(_T(""))
	, B(_T(""))
	, C(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, A);
	DDX_Text(pDX, IDC_EDIT2, B);
	DDX_Text(pDX, IDC_EDIT3, C);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &MyDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &MyDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &MyDlg::OnBnClickedButton6)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	float c = a + b;
	C.Format(_T("%lf"), c);
	UpdateData(false);
}


void MyDlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	float c = a - b;
	C.Format(_T("%lf"), c);
	UpdateData(false);
}


void MyDlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	float c = a * b;
	C.Format(_T("%lf"), c);
	UpdateData(false);
}


void MyDlg::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	if (b == 0)
		C = "error:��������Ϊ0";
	else
	{
		float c = a / b;
		C.Format(_T("%lf"), c);
	}

	UpdateData(false);
}


void MyDlg::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	if (a < 0)
		C = "error:�������������Ǹ���";
	else
	{
		float c =sqrt(a);
		C.Format(_T("%lf"), c);
	}
	UpdateData(false);
}


void MyDlg::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	float a = _ttof(A);//�ַ���ת��Ϊ������
	float b = _ttof(B);
	if (b == 0)
		C = "error:��ĸ����Ϊ0";
	else if
		(a == 0)
		C = "error:0û�е���";
	else
	{
		float c =1.0/(a/b);
		C.Format(_T("%lf"), c);
	}
	UpdateData(false);
}
