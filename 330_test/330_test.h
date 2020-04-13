
// 330_test.h : 330_test 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy330_testApp:
// 有关此类的实现，请参阅 330_test.cpp
//

class CMy330_testApp : public CWinApp
{
public:
	CMy330_testApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy330_testApp theApp;
