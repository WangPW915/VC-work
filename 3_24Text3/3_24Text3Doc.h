
// 3_24Text3Doc.h : CMy3_24Text3Doc ��Ľӿ�
//


#pragma once


class CMy3_24Text3Doc : public CDocument
{
protected: // �������л�����
	CMy3_24Text3Doc();
	DECLARE_DYNCREATE(CMy3_24Text3Doc)

// ����
public:

// ����
public:
	int flag;
	CPoint m_point;
	CRect m_tagRec;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy3_24Text3Doc();
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
