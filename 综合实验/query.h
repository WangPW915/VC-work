#pragma once


// query �Ի���

class query : public CDialogEx
{
	DECLARE_DYNAMIC(query)

public:
	query(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~query();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString where;
};
