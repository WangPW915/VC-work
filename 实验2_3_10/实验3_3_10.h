
// ʵ��3_3_10.h : ʵ��3_3_10 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��3_3_10App:
// �йش����ʵ�֣������ ʵ��3_3_10.cpp
//

class Cʵ��3_3_10App : public CWinApp
{
public:
	Cʵ��3_3_10App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��3_3_10App theApp;
