﻿
// MFC_FILE02Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFC_FILE02.h"
#include "MFC_FILE02Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCFILE02Dlg 대화 상자



CMFCFILE02Dlg::CMFCFILE02Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_FILE02_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCFILE02Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_IMAGE_VIEW2, m_image_view2);
	DDX_Control(pDX, IDC_IMAGE_VIEW3, m_image_view3);
	DDX_Control(pDX, IDC_IMAGE_VIEW1, m_image_view1);
}

BEGIN_MESSAGE_MAP(CMFCFILE02Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_IMAGE, &CMFCFILE02Dlg::OnClickedBtnImage)
END_MESSAGE_MAP()


// CMFCFILE02Dlg 메시지 처리기

BOOL CMFCFILE02Dlg::OnInitDialog()
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

void CMFCFILE02Dlg::OnPaint()
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
HCURSOR CMFCFILE02Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCFILE02Dlg::OnClickedBtnImage()
{
	CRect rect1;		// 픽쳐 컨트롤의 크기를 저장할 CRect 객체
	CRect rect2;
	CRect rect3;

	CDC* dc1;		// 픽쳐 컨트롤의 DC를 가져올 CDC 포인터
	CDC* dc2;
	CDC* dc3;

	CImage image1;	// 불러오고 싶은 이미지를 로드할 CImage
	CImage image2;
	CImage image3;

	m_image_view1.GetWindowRect(rect1);	// GetWindowRect를 사용해서 픽쳐 컨트롤의 크기를 받는다.
	m_image_view2.GetWindowRect(rect2);	// GetWindowRect를 사용해서 픽쳐 컨트롤의 크기를 받는다.
	m_image_view3.GetWindowRect(rect3);	// GetWindowRect를 사용해서 픽쳐 컨트롤의 크기를 받는다.
	
	dc1 = m_image_view1.GetDC();	// 픽쳐 컨트롤의 DC를 얻는다.
	dc2 = m_image_view2.GetDC();
	dc3 = m_image_view3.GetDC();

	image1.Load(_T("5.jpg"));	// 이미지 로드
	image2.Load(_T("5.jpg"));
	image3.Load(_T("5.jpg"));

	image1.StretchBlt(dc1->m_hDC, 0, 0, rect1.Width(), rect1.Height(), SRCCOPY);	// 이미지를 픽쳐 컨트롤 크기로 조정
	image2.StretchBlt(dc2->m_hDC, 0, 0, rect2.Width(), rect2.Height(), SRCCOPY);
	image3.StretchBlt(dc3->m_hDC, 0, 0, rect3.Width(), rect3.Height(), SRCCOPY);


}