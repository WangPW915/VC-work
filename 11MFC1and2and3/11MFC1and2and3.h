
// 11MFC1and2and3.h : 11MFC1and2and3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11MFC1and2and3App:
// �йش����ʵ�֣������ 11MFC1and2and3.cpp
//

class CMy11MFC1and2and3App : public CWinApp
{
public:
	CMy11MFC1and2and3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11MFC1and2and3App theApp;
