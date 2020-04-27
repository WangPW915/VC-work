// MyDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "420_test1.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog 对话框

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


// MyDialog 消息处理程序


void MyDialog::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyDialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
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
	// TODO:  在此添加控件通知处理程序代码
}


void MyDialog::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
}


void MyDialog::OnBnClickedButton4()
{
	// TODO:  在此添加控件通知处理程序代码
}

void MyDialog::OnBnClickedButton5()
{
	// TODO:  在此添加控件通知处理程序代码
}


void MyDialog::OnBnClickedButton6()
{
	// TODO:  在此添加控件通知处理程序代码
}
