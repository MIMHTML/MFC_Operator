
// MFC_ExamChatDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFC_ExamChat.h"
#include "MFC_ExamChatDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCExamChatDlg dialog



CMFCExamChatDlg::CMFCExamChatDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_EXAMCHAT_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_rect.SetRect(10, 10, 100, 100);
}

void CMFCExamChatDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHAT_LIST1, m_chat_list);
}

BEGIN_MESSAGE_MAP(CMFCExamChatDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ADD_BTN, &CMFCExamChatDlg::OnBnClickedAddBtn)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()


// CMFCExamChatDlg message handlers

BOOL CMFCExamChatDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCExamChatDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	if (IsIconic())
	{

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
		// CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCExamChatDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCExamChatDlg::OnBnClickedAddBtn()
{
	CString str;
	GetDlgItemText(IDC_CHAT_EDIT, str);
	SetDlgItemText(IDC_CHAT_EDIT, L"");

	int index = m_chat_list.InsertString(-1, str);
	m_chat_list.SetCurSel(index);
}


void CMFCExamChatDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	if (point.x >= m_rect.left && point.y >= m_rect.top &&
		point.x <= m_rect.right && point.y <= m_rect.bottom) {
		m_is_clicked = 1;
		m_prev_pos = point;
	}

	CDialogEx::OnLButtonDown(nFlags, point);
}


void CMFCExamChatDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	if (m_is_clicked == 1) {
		m_is_clicked = 0;
	}
	CDialogEx::OnLButtonUp(nFlags, point);
}


void CMFCExamChatDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	if (m_is_clicked == 1) {
		CPoint move_pos = point - m_prev_pos;
		// move_pos.x = point.x - m_prev_pos.x;
		// move_pos.y = point.y - m_prev_pos.y;
		m_rect.left += move_pos.x;
		m_rect.top += move_pos.y;
		m_rect.right += move_pos.x;
		m_rect.bottom += move_pos.y;

		m_prev_pos = point;

		Invalidate();
	}
	CDialogEx::OnMouseMove(nFlags, point);
}
