
// test3_16View.h : Ctest3_16View ��Ľӿ�
//

#pragma once


class Ctest3_16View : public CView
{
protected: // �������л�����
	Ctest3_16View();
	DECLARE_DYNCREATE(Ctest3_16View)

// ����
public:
	Ctest3_16Doc* GetDocument() const;

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
	virtual ~Ctest3_16View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test3_16View.cpp �еĵ��԰汾
inline Ctest3_16Doc* Ctest3_16View::GetDocument() const
   { return reinterpret_cast<Ctest3_16Doc*>(m_pDocument); }
#endif

