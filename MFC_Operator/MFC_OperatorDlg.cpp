
// MFC_OperatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFC_Operator.h"
#include "MFC_OperatorDlg.h"
#include "afxdialogex.h"
#define SECOND_PER_TIME 60

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCOperatorDlg dialog



CMFCOperatorDlg::CMFCOperatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_OPERATOR_DIALOG, pParent)
	, m_a(0)
	, m_b(0)
	, m_c(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCOperatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_A, m_a);
	DDX_Text(pDX, IDC_EDIT_B, m_b);
	DDX_Text(pDX, IDC_EDIT_C, m_c);
}

BEGIN_MESSAGE_MAP(CMFCOperatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_PLUS, &CMFCOperatorDlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &CMFCOperatorDlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MULTIPLY, &CMFCOperatorDlg::OnBnClickedButtonMultiply)
	ON_BN_CLICKED(IDC_BUTTON_DEVIDE, &CMFCOperatorDlg::OnBnClickedButtonDevide)
	ON_BN_CLICKED(IDC_BUTTON_REMAIN, &CMFCOperatorDlg::OnBnClickedButtonRemain)
	ON_BN_CLICKED(IDC_BUTTON_EQ, &CMFCOperatorDlg::OnBnClickedButtonEq)
	ON_BN_CLICKED(IDC_BUTTON_NOTEQ, &CMFCOperatorDlg::OnBnClickedButtonNoteq)
	ON_BN_CLICKED(IDC_BUTTON_ATB, &CMFCOperatorDlg::OnBnClickedButtonAtb)
	ON_BN_CLICKED(IDC_BUTTON_ATEB, &CMFCOperatorDlg::OnBnClickedButtonAteb)
	ON_BN_CLICKED(IDC_BUTTON_ATEB2, &CMFCOperatorDlg::OnBnClickedButtonAteb2)
	ON_BN_CLICKED(IDC_BUTTON_NUMBER, &CMFCOperatorDlg::OnBnClickedButtonNumber)
	ON_BN_CLICKED(IDC_BUTTON_TIME, &CMFCOperatorDlg::OnBnClickedButtonTime)
	ON_BN_CLICKED(IDC_BUTTON_BNOT, &CMFCOperatorDlg::OnBnClickedButtonBnot)
	ON_BN_CLICKED(IDC_BUTTON_LS, &CMFCOperatorDlg::OnBnClickedButtonLs)
	ON_BN_CLICKED(IDC_BUTTON_RS, &CMFCOperatorDlg::OnBnClickedButtonRs)
END_MESSAGE_MAP()


// CMFCOperatorDlg message handlers

BOOL CMFCOperatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCOperatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCOperatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCOperatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// UpdateData(TRUE);	// 컨트롤의 값을 변수로 전송
// UpdateData(FALSE);	// 변수의 값을 컨트롤로 전송


void CMFCOperatorDlg::OnBnClickedButtonPlus()
{
	UpdateData(TRUE);
	m_c = m_a + m_b;
	UpdateData(FALSE);

	AfxMessageBox(_T("덧셈 결과 출력"));
}

void CMFCOperatorDlg::OnBnClickedButtonMinus()
{
	UpdateData(TRUE);
	m_c = m_a - m_b;
	UpdateData(FALSE);

	AfxMessageBox(_T("뺄셈 결과 출력"));
}

void CMFCOperatorDlg::OnBnClickedButtonMultiply()
{
	UpdateData(TRUE);
	m_c = m_a * m_b;
	UpdateData(FALSE);

	AfxMessageBox(_T("곱셈 결과 출력"));
}

void CMFCOperatorDlg::OnBnClickedButtonDevide()
{
	UpdateData(TRUE);
	m_c = m_a / m_b;
	UpdateData(FALSE);

	AfxMessageBox(_T("나눗셈 결과 출력"));
}

void CMFCOperatorDlg::OnBnClickedButtonRemain()
{
	UpdateData(TRUE);
	m_c = fmod(m_a, m_b);
	UpdateData(FALSE);

	AfxMessageBox(_T("나머지 결과 출력"));
}

void CMFCOperatorDlg::OnBnClickedButtonEq()
{
	UpdateData(TRUE);
	if (m_a == m_b)
		m_c = true;
	else m_c = false;

	UpdateData(FALSE);

}

void CMFCOperatorDlg::OnBnClickedButtonNoteq()
{
	UpdateData(TRUE);
	if (m_a != m_b)
		m_c = true;
	else m_c = false;

	UpdateData(FALSE);

}

void CMFCOperatorDlg::OnBnClickedButtonAtb()
{
	UpdateData(TRUE);
	if (m_a > m_b)
		m_c = true;
	else m_c = false;

	UpdateData(FALSE);

}

void CMFCOperatorDlg::OnBnClickedButtonAteb()
{
	UpdateData(TRUE);
	if (m_a >= m_b)
		m_c = true;
	else m_c = false;

	UpdateData(FALSE);

}

void CMFCOperatorDlg::OnBnClickedButtonAteb2()
{
	UpdateData(TRUE);
	
	if (m_a > m_b || m_a == m_b)
		m_c = true;
	else m_c = false;

	UpdateData(FALSE);

}

void CMFCOperatorDlg::OnBnClickedButtonNumber()
{
	UpdateData(TRUE);

	if ((int)m_a & 0x00000001)
		m_c = 1;
	else m_c = 0;

	UpdateData(FALSE);

	AfxMessageBox(_T("비트연산자 & 활용"));
}

void CMFCOperatorDlg::OnBnClickedButtonTime()
{
	UpdateData(TRUE);
	int b = m_a / SECOND_PER_TIME;
	m_b = b;
	m_c = fmod(m_a, SECOND_PER_TIME);

	UpdateData(FALSE);
}

void CMFCOperatorDlg::OnBnClickedButtonBnot()
{
	UpdateData(TRUE);
	
	m_b = ~(int)m_a;
	m_c = ~(int)m_a;

	UpdateData(FALSE);
}

void CMFCOperatorDlg::OnBnClickedButtonLs()
{
	UpdateData(TRUE);

	m_c = (int)m_a << (int)m_b;

	UpdateData(FALSE);

	AfxMessageBox(_T("<< 한 비트당 2배씩 증가"));
}

void CMFCOperatorDlg::OnBnClickedButtonRs()
{
	UpdateData(TRUE);

	m_c = (int)m_a >> (int)m_b;

	UpdateData(FALSE);
	AfxMessageBox(_T(">> 한 비트당 2배씩 감소"));
}
