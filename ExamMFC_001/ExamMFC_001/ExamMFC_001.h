
// ExamMFC_001.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CExamMFC001App:
// See ExamMFC_001.cpp for the implementation of this class
//

class CExamMFC001App : public CWinApp
{
public:
	CExamMFC001App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CExamMFC001App theApp;
