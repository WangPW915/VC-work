
// ʵ��3_3_10View.h : Cʵ��3_3_10View ��Ľӿ�
//

#pragma once


class Cʵ��3_3_10View : public CView
{
protected: // �������л�����
	Cʵ��3_3_10View();
	DECLARE_DYNCREATE(Cʵ��3_3_10View)

// ����
public:
	Cʵ��3_3_10Doc* GetDocument() const;

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
	virtual ~Cʵ��3_3_10View();
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

#ifndef _DEBUG  // ʵ��3_3_10View.cpp �еĵ��԰汾
inline Cʵ��3_3_10Doc* Cʵ��3_3_10View::GetDocument() const
   { return reinterpret_cast<Cʵ��3_3_10Doc*>(m_pDocument); }
#endif

