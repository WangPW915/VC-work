
// ��11�ܿ���ʵ��View.h : C��11�ܿ���ʵ��View ��Ľӿ�
//

#pragma once

class C��11�ܿ���ʵ��Set;

class C��11�ܿ���ʵ��View : public CRecordView
{
protected: // �������л�����
	C��11�ܿ���ʵ��View();
	DECLARE_DYNCREATE(C��11�ܿ���ʵ��View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11_FORM };
#endif
	C��11�ܿ���ʵ��Set* m_pSet;

// ����
public:
	C��11�ܿ���ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C��11�ܿ���ʵ��View();
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
};

#ifndef _DEBUG  // ��11�ܿ���ʵ��View.cpp �еĵ��԰汾
inline C��11�ܿ���ʵ��Doc* C��11�ܿ���ʵ��View::GetDocument() const
   { return reinterpret_cast<C��11�ܿ���ʵ��Doc*>(m_pDocument); }
#endif

