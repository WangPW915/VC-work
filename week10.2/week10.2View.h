
// week10.2View.h : Cweek102View ��Ľӿ�
//

#pragma once


class Cweek102View : public CView
{
protected: // �������л�����
	Cweek102View();
	DECLARE_DYNCREATE(Cweek102View)

// ����
public:
	Cweek102Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek102View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10.2View.cpp �еĵ��԰汾
inline Cweek102Doc* Cweek102View::GetDocument() const
   { return reinterpret_cast<Cweek102Doc*>(m_pDocument); }
#endif

