
// 407_test1View.h : CMy407_test1View ��Ľӿ�
//

#pragma once


class CMy407_test1View : public CView
{
protected: // �������л�����
	CMy407_test1View();
	DECLARE_DYNCREATE(CMy407_test1View)

// ����
public:
	CMy407_test1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy407_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // 407_test1View.cpp �еĵ��԰汾
inline CMy407_test1Doc* CMy407_test1View::GetDocument() const
   { return reinterpret_cast<CMy407_test1Doc*>(m_pDocument); }
#endif

