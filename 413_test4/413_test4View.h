
// 413_test4View.h : CMy413_test4View ��Ľӿ�
//

#pragma once


class CMy413_test4View : public CView
{
protected: // �������л�����
	CMy413_test4View();
	DECLARE_DYNCREATE(CMy413_test4View)

// ����
public:
	CMy413_test4Doc* GetDocument() const;

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
	virtual ~CMy413_test4View();
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
};

#ifndef _DEBUG  // 413_test4View.cpp �еĵ��԰汾
inline CMy413_test4Doc* CMy413_test4View::GetDocument() const
   { return reinterpret_cast<CMy413_test4Doc*>(m_pDocument); }
#endif
