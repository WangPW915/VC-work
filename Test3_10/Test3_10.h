
// Test3_10.h : Test3_10 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CTest3_10App:
// �йش����ʵ�֣������ Test3_10.cpp
//

class CTest3_10App : public CWinApp
{
public:
	CTest3_10App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTest3_10App theApp;
