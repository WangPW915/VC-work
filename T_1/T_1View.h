
// T_1View.h : CT_1View ��Ľӿ�
//

#pragma once


class CT_1View : public CView
{
protected: // �������л�����
	CT_1View();
	DECLARE_DYNCREATE(CT_1View)

// ����
public:
	CT_1Doc* GetDocument() const;

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
	virtual ~CT_1View();
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

#ifndef _DEBUG  // T_1View.cpp �еĵ��԰汾
inline CT_1Doc* CT_1View::GetDocument() const
   { return reinterpret_cast<CT_1Doc*>(m_pDocument); }
#endif
