
// 330_Test1View.h : CMy330_Test1View ��Ľӿ�
//

#pragma once


class CMy330_Test1View : public CView
{
protected: // �������л�����
	CMy330_Test1View();
	DECLARE_DYNCREATE(CMy330_Test1View)

// ����
public:
	CMy330_Test1Doc* GetDocument() const;

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
	virtual ~CMy330_Test1View();
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

#ifndef _DEBUG  // 330_Test1View.cpp �еĵ��԰汾
inline CMy330_Test1Doc* CMy330_Test1View::GetDocument() const
   { return reinterpret_cast<CMy330_Test1Doc*>(m_pDocument); }
#endif

