
// ��11�ܿ���ʵ��Set.h: C��11�ܿ���ʵ��Set ��Ľӿ�
//


#pragma once

// ���������� 2020��6��2��, 10:07

class C��11�ܿ���ʵ��Set : public CRecordset
{
public:
	C��11�ܿ���ʵ��Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(C��11�ܿ���ʵ��Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	double	column1;
	CStringW	column2;
	double	column3;
	CStringW	column4;
	CStringW	column5;
	CStringW	column6;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

