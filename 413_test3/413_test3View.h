
// 413_test3View.h : CMy413_test3View ��Ľӿ�
//

#pragma once


class CMy413_test3View : public CView
{
protected: // �������л�����
	CMy413_test3View();
	DECLARE_DYNCREATE(CMy413_test3View)

// ����
public:
	CMy413_test3Doc* GetDocument() const;

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
	virtual ~CMy413_test3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int satus;
	int flag;
	CRect cr;
	bool set;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 413_test3View.cpp �еĵ��԰汾
inline CMy413_test3Doc* CMy413_test3View::GetDocument() const
   { return reinterpret_cast<CMy413_test3Doc*>(m_pDocument); }
#endif

