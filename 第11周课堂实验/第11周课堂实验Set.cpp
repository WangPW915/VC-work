
// ��11�ܿ���ʵ��Set.cpp : C��11�ܿ���ʵ��Set ���ʵ��
//

#include "stdafx.h"
#include "��11�ܿ���ʵ��.h"
#include "��11�ܿ���ʵ��Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11�ܿ���ʵ��Set ʵ��

// ���������� 2020��6��2��, 10:07

IMPLEMENT_DYNAMIC(C��11�ܿ���ʵ��Set, CRecordset)

C��11�ܿ���ʵ��Set::C��11�ܿ���ʵ��Set(CDatabase* pdb)
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
CString C��11�ܿ���ʵ��Set::GetDefaultConnect()
{
	return _T("DSN=Stu;DBQ=D:\\\x684c\x9762\\Student.xls;DefaultDir=D:\\\x684c\x9762;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString C��11�ܿ���ʵ��Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void C��11�ܿ���ʵ��Set::DoFieldExchange(CFieldExchange* pFX)
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
// C��11�ܿ���ʵ��Set ���

#ifdef _DEBUG
void C��11�ܿ���ʵ��Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��11�ܿ���ʵ��Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

