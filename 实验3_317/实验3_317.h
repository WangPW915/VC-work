
// ʵ��3_317.h : ʵ��3_317 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��3_317App:
// �йش����ʵ�֣������ ʵ��3_317.cpp
//

class Cʵ��3_317App : public CWinApp
{
public:
	Cʵ��3_317App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��3_317App theApp;
