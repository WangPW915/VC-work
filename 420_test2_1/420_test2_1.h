
// 420_test2_1.h : 420_test2_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy420_test2_1App:
// �йش����ʵ�֣������ 420_test2_1.cpp
//

class CMy420_test2_1App : public CWinApp
{
public:
	CMy420_test2_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy420_test2_1App theApp;
