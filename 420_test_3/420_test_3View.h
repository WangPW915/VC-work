
// 420_test_3View.h : CMy420_test_3View ��Ľӿ�
//

#pragma once


class CMy420_test_3View : public CView
{
protected: // �������л�����
	CMy420_test_3View();
	DECLARE_DYNCREATE(CMy420_test_3View)

// ����
public:
	CMy420_test_3Doc* GetDocument() const;

// ����
public:
	CRect cr;

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
	virtual ~CMy420_test_3View();
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

#ifndef _DEBUG  // 420_test_3View.cpp �еĵ��԰汾
inline CMy420_test_3Doc* CMy420_test_3View::GetDocument() const
   { return reinterpret_cast<CMy420_test_3Doc*>(m_pDocument); }
#endif

