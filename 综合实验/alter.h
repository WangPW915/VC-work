#pragma once


// alter �Ի���

class alter : public CDialogEx
{
	DECLARE_DYNAMIC(alter)

public:
	alter(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~alter();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString Sname;
	CString Sno;
	CString Smajor;
	CString Ssex;
	CString Sbirth;
	CString Sphone;
	CString Saddress;
	CString Spath;
};
