
// 11MFC1and2and3View.h : CMy11MFC1and2and3View ��Ľӿ�
//

#pragma once

class CMy11MFC1and2and3Set;

class CMy11MFC1and2and3View : public CRecordView
{
protected: // �������л�����
	CMy11MFC1and2and3View();
	DECLARE_DYNCREATE(CMy11MFC1and2and3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11MFC1AND2AND3_FORM };
#endif
	CMy11MFC1and2and3Set* m_pSet;

// ����
public:
	CMy11MFC1and2and3Doc* GetDocument() const;

// ����
public:
	CRect picRect;
	CString path;
	CString filename;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy11MFC1and2and3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	double column1;
	CString column2;
	double column3;
	CString column4;
	CString column5;
	CString column6;
	afx_msg void draw_pic(CString file);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // 11MFC1and2and3View.cpp �еĵ��԰汾
inline CMy11MFC1and2and3Doc* CMy11MFC1and2and3View::GetDocument() const
   { return reinterpret_cast<CMy11MFC1and2and3Doc*>(m_pDocument); }
#endif

