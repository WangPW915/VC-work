
// 3_23test1View.h : CMy3_23test1View ��Ľӿ�
//

#pragma once


class CMy3_23test1View : public CView
{
protected: // �������л�����
	CMy3_23test1View();
	DECLARE_DYNCREATE(CMy3_23test1View)

// ����
public:
	CMy3_23test1Doc* GetDocument() const;

// ����
public:
	CRect rect;
	int x, y;
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
	virtual ~CMy3_23test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCirclechange();
};

#ifndef _DEBUG  // 3_23test1View.cpp �еĵ��԰汾
inline CMy3_23test1Doc* CMy3_23test1View::GetDocument() const
   { return reinterpret_cast<CMy3_23test1Doc*>(m_pDocument); }
#endif

