
// 3_03Text2View.h : CMy3_03Text2View ��Ľӿ�
//

#pragma once


class CMy3_03Text2View : public CView
{
protected: // �������л�����
	CMy3_03Text2View();
	DECLARE_DYNCREATE(CMy3_03Text2View)

// ����
public:
	CMy3_03Text2Doc* GetDocument() const;

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
	virtual ~CMy3_03Text2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3_03Text2View.cpp �еĵ��԰汾
inline CMy3_03Text2Doc* CMy3_03Text2View::GetDocument() const
   { return reinterpret_cast<CMy3_03Text2Doc*>(m_pDocument); }
#endif

