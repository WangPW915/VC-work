
// 414_test1.h : 414_test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy414_test1App:
// �йش����ʵ�֣������ 414_test1.cpp
//

class CMy414_test1App : public CWinApp
{
public:
	CMy414_test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy414_test1App theApp;
