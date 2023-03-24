
// MFC_Operator.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCOperatorApp:
// See MFC_Operator.cpp for the implementation of this class
//

class CMFCOperatorApp : public CWinApp
{
public:
	CMFCOperatorApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCOperatorApp theApp;
