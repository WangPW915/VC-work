
// test3_16.h : test3_16 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ctest3_16App:
// �йش����ʵ�֣������ test3_16.cpp
//

class Ctest3_16App : public CWinApp
{
public:
	Ctest3_16App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest3_16App theApp;
