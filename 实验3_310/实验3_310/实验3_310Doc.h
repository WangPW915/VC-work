
// ʵ��3_310Doc.h : Cʵ��3_310Doc ��Ľӿ�
//


#pragma once


class Cʵ��3_310Doc : public CDocument
{
protected: // �������л�����
	Cʵ��3_310Doc();
	DECLARE_DYNCREATE(Cʵ��3_310Doc)
	int a, b;
	CRect A, B, C;
// ����
public:

// ����
public:

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
	virtual ~Cʵ��3_310Doc();
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
