
// ʵ��3_317View.h : Cʵ��3_317View ��Ľӿ�
//

#pragma once


class Cʵ��3_317View : public CView
{
protected: // �������л�����
	Cʵ��3_317View();
	DECLARE_DYNCREATE(Cʵ��3_317View)

// ����
public:
	Cʵ��3_317Doc* GetDocument() const;

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
	virtual ~Cʵ��3_317View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ʵ��3_317View.cpp �еĵ��԰汾
inline Cʵ��3_317Doc* Cʵ��3_317View::GetDocument() const
   { return reinterpret_cast<Cʵ��3_317Doc*>(m_pDocument); }
#endif

