
// 420_test2_1View.h : CMy420_test2_1View ��Ľӿ�
//

#pragma once


class CMy420_test2_1View : public CView
{
protected: // �������л�����
	CMy420_test2_1View();
	DECLARE_DYNCREATE(CMy420_test2_1View)

// ����
public:
	CMy420_test2_1Doc* GetDocument() const;

// ����
public:
	CPoint a, b;
	int flag;

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
	virtual ~CMy420_test2_1View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 420_test2_1View.cpp �еĵ��԰汾
inline CMy420_test2_1Doc* CMy420_test2_1View::GetDocument() const
   { return reinterpret_cast<CMy420_test2_1Doc*>(m_pDocument); }
#endif

