
// 331_test1.h : 331_test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy331_test1App:
// �йش����ʵ�֣������ 331_test1.cpp
//

class CMy331_test1App : public CWinApp
{
public:
	CMy331_test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy331_test1App theApp;
