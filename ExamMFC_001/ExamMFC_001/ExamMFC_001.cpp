
// ExamMFC_001.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "ExamMFC_001.h"
#include "ExamMFC_001Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExamMFC001App

BEGIN_MESSAGE_MAP(CExamMFC001App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CExamMFC001App construction

CExamMFC001App::CExamMFC001App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CExamMFC001App object

CExamMFC001App theApp;


// CExamMFC001App initialization

BOOL CExamMFC001App::InitInstance()
{
	CWinApp::InitInstance(); 

	CExamMFC001Dlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

