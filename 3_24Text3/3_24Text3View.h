
// 3_24Text3View.h : CMy3_24Text3View ��Ľӿ�
//

#pragma once


class CMy3_24Text3View : public CView
{
protected: // �������л�����
	CMy3_24Text3View();
	DECLARE_DYNCREATE(CMy3_24Text3View)

// ����
public:
	CMy3_24Text3Doc* GetDocument() const;

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
	virtual ~CMy3_24Text3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3_24Text3View.cpp �еĵ��԰汾
inline CMy3_24Text3Doc* CMy3_24Text3View::GetDocument() const
   { return reinterpret_cast<CMy3_24Text3Doc*>(m_pDocument); }
#endif

