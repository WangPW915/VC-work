
// ʵ��1_317.h : ʵ��1_317 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��1_317App:
// �йش����ʵ�֣������ ʵ��1_317.cpp
//

class Cʵ��1_317App : public CWinApp
{
public:
	Cʵ��1_317App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��1_317App theApp;
