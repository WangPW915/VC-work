
// test3_16Doc.h : Ctest3_16Doc ��Ľӿ�
//


#pragma once


class Ctest3_16Doc : public CDocument //�������������£��ƶ�ֱ��̧���������̣��ڰ���ʱ��¼�����λ��,��
	                                  //̧�𻭳�һ�����Σ��԰��º�̧���λ����Ϊ���ε����Խǡ�
									  //��������ƶ��������ڿͻ�����ʾ����λ����Ϣ
{
protected: // �������л�����
	Ctest3_16Doc();
	DECLARE_DYNCREATE(Ctest3_16Doc)

// ����
public:
	CRect A;
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
	virtual ~Ctest3_16Doc();
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
