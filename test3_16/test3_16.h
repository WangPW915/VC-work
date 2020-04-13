
// test3_16.h : test3_16 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Ctest3_16App:
// 有关此类的实现，请参阅 test3_16.cpp
//

class Ctest3_16App : public CWinApp
{
public:
	Ctest3_16App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest3_16App theApp;
