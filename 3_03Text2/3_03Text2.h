
// 3_03Text2.h : 3_03Text2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy3_03Text2App:
// �йش����ʵ�֣������ 3_03Text2.cpp
//

class CMy3_03Text2App : public CWinApp
{
public:
	CMy3_03Text2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy3_03Text2App theApp;
