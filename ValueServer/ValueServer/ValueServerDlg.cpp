
// ValueServerDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "ValueServer.h"
#include "ValueServerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CValueServerDlg 대화 상자



CValueServerDlg::CValueServerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_VALUESERVER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CValueServerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CValueServerDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
	ON_WM_DESTROY()
END_MESSAGE_MAP()


// CValueServerDlg 메시지 처리기

BOOL CValueServerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	mh_edit_bk_brush = ::CreateSolidBrush(RGB(0,255,255));

	for (int i = 0; i < 6; i++) {
	SetDlgItemText(IDC_EDIT1+i, _T("안녕하세요 김명일입니다"));
	
	}


	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	m_server.Create(26001); //, 1 , _T("192.168.1.32"));
	m_server.Listen();

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CValueServerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CValueServerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

HBRUSH CValueServerDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	int control_id = pWnd->GetDlgCtrlID();
	if (control_id >= IDC_EDIT1 && control_id <= IDC_EDIT6) {
		HWND cur_focus = ::GetFocus();
		if (cur_focus == pWnd->m_hWnd) {
			if (mh_old_focus != cur_focus) {
				if (mh_old_focus != cur_focus)
					::InvalidateRect(mh_old_focus, NULL, TRUE);
				mh_old_focus = cur_focus;
			}
			pDC->SetTextColor(RGB(0, 200, 200));
		}
		else {
			pDC->SetTextColor(RGB(0, 100, 100));
		}


		pDC->SetBkColor(RGB(0, 255, 255));
		return mh_edit_bk_brush;
	}
	
	/*if (control_id == IDC_EDIT2) {
		pDC->SetTextColor(RGB(0, 120, 120));
		pDC->SetBkColor(RGB(0, 200, 200));
		return mh_edit_bk_brush;
	}
	if (control_id == IDC_EDIT3) {
		pDC->SetTextColor(RGB(0, 150, 150));
		pDC->SetBkColor(RGB(0, 150, 150));
		return mh_edit_bk_brush;
	}
	if (control_id == IDC_EDIT4) {
		pDC->SetTextColor(RGB(0, 180, 180));
		pDC->SetBkColor(RGB(0, 120, 120));
		return mh_edit_bk_brush;
	}
	if (control_id == IDC_EDIT5) {
		pDC->SetTextColor(RGB(0, 255, 255));
		pDC->SetBkColor(RGB(0, 80, 80));
		return mh_edit_bk_brush;
	}
	if (control_id == IDC_EDIT6) {
		pDC->SetTextColor(RGB(0, 255, 255));
		pDC->SetBkColor(RGB(0, 30, 30));
		return mh_edit_bk_brush;
	}*/
	
	return hbr;
}


void CValueServerDlg::OnDestroy()
{
	CDialogEx::OnDestroy();

	DeleteObject(mh_edit_bk_brush);
}
