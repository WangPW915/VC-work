
// 11MFC1and2and3Set.cpp : CMy11MFC1and2and3Set ���ʵ��
//

#include "stdafx.h"
#include "11MFC1and2and3.h"
#include "11MFC1and2and3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11MFC1and2and3Set ʵ��

// ���������� 2020��6��1��, 21:32

IMPLEMENT_DYNAMIC(CMy11MFC1and2and3Set, CRecordset)

CMy11MFC1and2and3Set::CMy11MFC1and2and3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = 0.0;
	column2 = L"";
	column3 = 0.0;
	column4 = L"";
	column5 = L"";
	column6 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11MFC1and2and3Set::GetDefaultConnect()
{
	return _T("DSN=Student;DBQ=D:\\\x684c\x9762\\Student.xls;DefaultDir=D:\\\x684c\x9762;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CMy11MFC1and2and3Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CMy11MFC1and2and3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[���]"), column1);
	RFX_Text(pFX, _T("[����]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Text(pFX, _T("[�绰]"), column4);
	RFX_Text(pFX, _T("[ѧ��]"), column5);
	RFX_Text(pFX, _T("[��Ƭ]"), column6);

}
/////////////////////////////////////////////////////////////////////////////
// CMy11MFC1and2and3Set ���

#ifdef _DEBUG
void CMy11MFC1and2and3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11MFC1and2and3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

