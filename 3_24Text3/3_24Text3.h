
// 3_24Text3.h : 3_24Text3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy3_24Text3App:
// �йش����ʵ�֣������ 3_24Text3.cpp
//

class CMy3_24Text3App : public CWinApp
{
public:
	CMy3_24Text3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy3_24Text3App theApp;
