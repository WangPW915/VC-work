
// 11MFC1and2and3Doc.h : CMy11MFC1and2and3Doc ��Ľӿ�
//


#pragma once
#include "11MFC1and2and3Set.h"


class CMy11MFC1and2and3Doc : public CDocument
{
protected: // �������л�����
	CMy11MFC1and2and3Doc();
	DECLARE_DYNCREATE(CMy11MFC1and2and3Doc)

// ����
public:
	CMy11MFC1and2and3Set m_My11MFC1and2and3Set;

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
	virtual ~CMy11MFC1and2and3Doc();
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
