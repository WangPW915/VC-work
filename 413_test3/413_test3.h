
// 413_test3.h : 413_test3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy413_test3App:
// �йش����ʵ�֣������ 413_test3.cpp
//

class CMy413_test3App : public CWinApp
{
public:
	CMy413_test3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy413_test3App theApp;
