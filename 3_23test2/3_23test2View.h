
// 3_23test2View.h : CMy3_23test2View ��Ľӿ�
//

#pragma once


class CMy3_23test2View : public CView
{
protected: // �������л�����
	CMy3_23test2View();
	DECLARE_DYNCREATE(CMy3_23test2View)

// ����
public:
	CMy3_23test2Doc* GetDocument() const;

// ����
public:
	CRect rect;
	int x, y;
	int red, green, blue, color;

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
	virtual ~CMy3_23test2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorcirclechange();
};

#ifndef _DEBUG  // 3_23test2View.cpp �еĵ��԰汾
inline CMy3_23test2Doc* CMy3_23test2View::GetDocument() const
   { return reinterpret_cast<CMy3_23test2Doc*>(m_pDocument); }
#endif

