﻿
// MFC_PRACTICEDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFC_PRACTICE.h"
#include "MFC_PRACTICEDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFCPRACTICEDlg 대화 상자


CMFCPRACTICEDlg::CMFCPRACTICEDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_PRACTICE_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCPRACTICEDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCPRACTICEDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()


// CMFCPRACTICEDlg 메시지 처리기

BOOL CMFCPRACTICEDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CMFCPRACTICEDlg::OnPaint()
{
	CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.
	dc.Rectangle(10, 10, 200, 200); // 좌상단, 우하단 좌표값
	dc.Ellipse(200, 100, 500, 200);

	CRect rect;
	GetClientRect(&rect);

	dc.MoveTo(rect.bottom / 2, 0);
	dc.LineTo(rect.right, rect.bottom / 2);

	dc.MoveTo(rect.right / 2, 0);
	dc.LineTo(rect.right / 2, rect.bottom);


	if (IsIconic())
	{
		
		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
	
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
HCURSOR CMFCPRACTICEDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCPRACTICEDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC dc(this);

	dc.Rectangle(point.x - 20, point.y - 20, point.x + 20, point.y + 20);
}


void CMFCPRACTICEDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	CClientDC dc(this);

	dc.Ellipse(point.x - 20, point.y - 20, point.x + 20, point.y + 20);
}
