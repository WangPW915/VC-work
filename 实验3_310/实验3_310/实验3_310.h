
// ʵ��3_310.h : ʵ��3_310 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��3_310App:
// �йش����ʵ�֣������ ʵ��3_310.cpp
//

class Cʵ��3_310App : public CWinApp
{
public:
	Cʵ��3_310App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��3_310App theApp;
