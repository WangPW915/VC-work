
// 413_test4.h : 413_test4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy413_test4App:
// �йش����ʵ�֣������ 413_test4.cpp
//

class CMy413_test4App : public CWinApp
{
public:
	CMy413_test4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy413_test4App theApp;
