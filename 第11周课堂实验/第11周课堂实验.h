
// ��11�ܿ���ʵ��.h : ��11�ܿ���ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��11�ܿ���ʵ��App:
// �йش����ʵ�֣������ ��11�ܿ���ʵ��.cpp
//

class C��11�ܿ���ʵ��App : public CWinApp
{
public:
	C��11�ܿ���ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��11�ܿ���ʵ��App theApp;
