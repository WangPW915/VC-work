
// 3_24Text1.h : 3_24Text1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy3_24Text1App:
// �йش����ʵ�֣������ 3_24Text1.cpp
//

class CMy3_24Text1App : public CWinApp
{
public:
	CMy3_24Text1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy3_24Text1App theApp;
