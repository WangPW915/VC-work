
// 11MFC1and2and3Set.h: CMy11MFC1and2and3Set ��Ľӿ�
//


#pragma once

// ���������� 2020��6��1��, 21:32

class CMy11MFC1and2and3Set : public CRecordset
{
public:
	CMy11MFC1and2and3Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMy11MFC1and2and3Set)

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

