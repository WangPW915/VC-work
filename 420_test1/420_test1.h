
// 420_test1.h : 420_test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy420_test1App:
// �йش����ʵ�֣������ 420_test1.cpp
//

class CMy420_test1App : public CWinApp
{
public:
	CMy420_test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy420_test1App theApp;
