
// �ۺ�ʵ��View.h : C�ۺ�ʵ��View ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ��Set;

class C�ۺ�ʵ��View : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ��View();
	DECLARE_DYNCREATE(C�ۺ�ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C�ۺ�ʵ��Set* m_pSet;

// ����
public:
	C�ۺ�ʵ��Doc* GetDocument() const;

// ����
public:
	CString filepath;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C�ۺ�ʵ��View();
	void draw_pic(CString filepath);
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString c1;
	CString c2;
	CString c3;
	CString c4;
	CString c5;
	CString c6;
	CString c7;
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void Query();
	afx_msg void order();
	afx_msg void Traverse();
	afx_msg void Delete();
	afx_msg void Add();
	afx_msg void Update();
};

#ifndef _DEBUG  // �ۺ�ʵ��View.cpp �еĵ��԰汾
inline C�ۺ�ʵ��Doc* C�ۺ�ʵ��View::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ��Doc*>(m_pDocument); }
#endif

