
// ʵ��1_310.h : ʵ��1_310 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��1_310App:
// �йش����ʵ�֣������ ʵ��1_310.cpp
//

class Cʵ��1_310App : public CWinApp
{
public:
	Cʵ��1_310App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��1_310App theApp;
