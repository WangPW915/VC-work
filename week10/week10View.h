
// week10View.h : Cweek10View ��Ľӿ�
//

#pragma once


class Cweek10View : public CView
{
protected: // �������л�����
	Cweek10View();
	DECLARE_DYNCREATE(Cweek10View)

// ����
public:
	Cweek10Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10View.cpp �еĵ��԰汾
inline Cweek10Doc* Cweek10View::GetDocument() const
   { return reinterpret_cast<Cweek10Doc*>(m_pDocument); }
#endif

