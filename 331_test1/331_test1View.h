
// 331_test1View.h : CMy331_test1View ��Ľӿ�
//

#pragma once


class CMy331_test1View : public CView
{
protected: // �������л�����
	CMy331_test1View();
	DECLARE_DYNCREATE(CMy331_test1View)

// ����
public:
	CMy331_test1Doc* GetDocument() const;

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
	virtual ~CMy331_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int x, y;
	int i = 1;
	CString s;
	int m;
	int flag;
	
// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 331_test1View.cpp �еĵ��԰汾
inline CMy331_test1Doc* CMy331_test1View::GetDocument() const
   { return reinterpret_cast<CMy331_test1Doc*>(m_pDocument); }
#endif

