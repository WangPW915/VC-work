
// ʵ��2_317.h : ʵ��2_317 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��2_317App:
// �йش����ʵ�֣������ ʵ��2_317.cpp
//

class Cʵ��2_317App : public CWinApp
{
public:
	Cʵ��2_317App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��2_317App theApp;
