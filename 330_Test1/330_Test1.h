
// 330_Test1.h : 330_Test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy330_Test1App:
// �йش����ʵ�֣������ 330_Test1.cpp
//

class CMy330_Test1App : public CWinApp
{
public:
	CMy330_Test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy330_Test1App theApp;
