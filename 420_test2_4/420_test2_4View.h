
// 420_test2_4View.h : CMy420_test2_4View ��Ľӿ�
//

#pragma once


class CMy420_test2_4View : public CView
{
protected: // �������л�����
	CMy420_test2_4View();
	DECLARE_DYNCREATE(CMy420_test2_4View)

// ����
public:
	CMy420_test2_4Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int r, g, b;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy420_test2_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 420_test2_4View.cpp �еĵ��԰汾
inline CMy420_test2_4Doc* CMy420_test2_4View::GetDocument() const
   { return reinterpret_cast<CMy420_test2_4Doc*>(m_pDocument); }
#endif

