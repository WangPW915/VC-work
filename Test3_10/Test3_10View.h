
// Test3_10View.h : CTest3_10View ��Ľӿ�
//

#pragma once


class CTest3_10View : public CView
{
protected: // �������л�����
	CTest3_10View();
	DECLARE_DYNCREATE(CTest3_10View)

// ����
public:
	CTest3_10Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;

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
	virtual ~CTest3_10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Test3_10View.cpp �еĵ��԰汾
inline CTest3_10Doc* CTest3_10View::GetDocument() const
   { return reinterpret_cast<CTest3_10Doc*>(m_pDocument); }
#endif

