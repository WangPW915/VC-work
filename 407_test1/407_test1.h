
// 407_test1.h : 407_test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy407_test1App:
// �йش����ʵ�֣������ 407_test1.cpp
//

class CMy407_test1App : public CWinApp
{
public:
	CMy407_test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy407_test1App theApp;
