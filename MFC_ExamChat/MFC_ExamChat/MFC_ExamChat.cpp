
// MFC_ExamChat.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "MFC_ExamChat.h"
#include "MFC_ExamChatDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExamChatApp

BEGIN_MESSAGE_MAP(CMFCExamChatApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCExamChatApp construction

CMFCExamChatApp::CMFCExamChatApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMFCExamChatApp object

CMFCExamChatApp theApp;


// CMFCExamChatApp initialization

BOOL CMFCExamChatApp::InitInstance()
{

	CWinApp::InitInstance();

	CMFCExamChatDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

