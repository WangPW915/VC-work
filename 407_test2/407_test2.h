
// 407_test2.h : 407_test2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy407_test2App:
// �йش����ʵ�֣������ 407_test2.cpp
//

class CMy407_test2App : public CWinApp
{
public:
	CMy407_test2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy407_test2App theApp;
