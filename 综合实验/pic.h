#pragma once


// pic �Ի���

class pic : public CDialogEx
{
	DECLARE_DYNAMIC(pic)

public:
	pic(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~pic();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString path;
};
