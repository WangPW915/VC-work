
// ��11�ܿ���ʵ��Doc.h : C��11�ܿ���ʵ��Doc ��Ľӿ�
//


#pragma once
#include "��11�ܿ���ʵ��Set.h"


class C��11�ܿ���ʵ��Doc : public CDocument
{
protected: // �������л�����
	C��11�ܿ���ʵ��Doc();
	DECLARE_DYNCREATE(C��11�ܿ���ʵ��Doc)

// ����
public:
	C��11�ܿ���ʵ��Set m_��11�ܿ���ʵ��Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C��11�ܿ���ʵ��Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
