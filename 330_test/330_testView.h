
// 330_testView.h : CMy330_testView ��Ľӿ�
//

#pragma once


class CMy330_testView : public CView
{
protected: // �������л�����
	CMy330_testView();
	DECLARE_DYNCREATE(CMy330_testView)

// ����
public:
	CMy330_testDoc* GetDocument() const;

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
	virtual ~CMy330_testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileopen();
};

#ifndef _DEBUG  // 330_testView.cpp �еĵ��԰汾
inline CMy330_testDoc* CMy330_testView::GetDocument() const
   { return reinterpret_cast<CMy330_testDoc*>(m_pDocument); }
#endif

