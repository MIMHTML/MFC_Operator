
// MFC_PRACTICE.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "MFC_PRACTICE.h"
#include "MFC_PRACTICEDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCPRACTICEApp

BEGIN_MESSAGE_MAP(CMFCPRACTICEApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCPRACTICEApp 생성

CMFCPRACTICEApp::CMFCPRACTICEApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CMFCPRACTICEApp 개체입니다.

CMFCPRACTICEApp theApp;


// CMFCPRACTICEApp 초기화

BOOL CMFCPRACTICEApp::InitInstance()
{
	CWinApp::InitInstance();

	CMFCPRACTICEDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

