
// 330_test.h : 330_test Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy330_testApp:
// �йش����ʵ�֣������ 330_test.cpp
//

class CMy330_testApp : public CWinApp
{
public:
	CMy330_testApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy330_testApp theApp;
