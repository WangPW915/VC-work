
// 413_test1View.h : CMy413_test1View ��Ľӿ�
//

#pragma once


class CMy413_test1View : public CView
{
protected: // �������л�����
	CMy413_test1View();
	DECLARE_DYNCREATE(CMy413_test1View)

// ����
public:
	CMy413_test1Doc* GetDocument() const;

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
	virtual ~CMy413_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int x, y, x1, y1;
	int flag;
	CRect cr;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 413_test1View.cpp �еĵ��԰汾
inline CMy413_test1Doc* CMy413_test1View::GetDocument() const
   { return reinterpret_cast<CMy413_test1Doc*>(m_pDocument); }
#endif

