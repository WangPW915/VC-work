
// ʵ��1_310View.h : Cʵ��1_310View ��Ľӿ�
//

#pragma once


class Cʵ��1_310View : public CView
{
protected: // �������л�����
	Cʵ��1_310View();
	DECLARE_DYNCREATE(Cʵ��1_310View)

// ����
public:
	Cʵ��1_310Doc* GetDocument() const;

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
	virtual ~Cʵ��1_310View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ʵ��1_310View.cpp �еĵ��԰汾
inline Cʵ��1_310Doc* Cʵ��1_310View::GetDocument() const
   { return reinterpret_cast<Cʵ��1_310Doc*>(m_pDocument); }
#endif

