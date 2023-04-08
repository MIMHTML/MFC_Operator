
// MFC_DOGDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFC_DOG.h"
#include "MFC_DOGDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCDOGDlg 대화 상자



CMFCDOGDlg::CMFCDOGDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_DOG_DIALOG, pParent)
	, m_puppy_image_file_path(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCDOGDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_PUPPY_IMAGE_FILE_PATH, m_puppy_image_file_path);
	DDX_Control(pDX, IDC_PUPPY_IMAGE_VIEW, m_puppy_image_view);
	DDX_Control(pDX, IDC_PUPPY_BREED, m_puppy_breed);
	DDX_Control(pDX, IDC_PUPPY_SEARCH_BAR, m_puppy_search_bar);
	DDX_Control(pDX, IDC_PUPPY_CONTENT, m_puppy_content);
}

BEGIN_MESSAGE_MAP(CMFCDOGDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_PUPPY_TEXT_FILE_OPEN_BTN, &CMFCDOGDlg::OnBnClickedPuppyTextFileOpen)
	ON_BN_CLICKED(IDC_PUPPY_TEXT_FILE_MODIFY_BTN, &CMFCDOGDlg::OnBnClickedPuppyTextFileModify)
	ON_BN_CLICKED(IDC_PUPPY_SEARCH_BTN, &CMFCDOGDlg::OnBnClickedPuppySearchBtn)
END_MESSAGE_MAP()


// CMFCDOGDlg 메시지 처리기

BOOL CMFCDOGDlg::OnInitDialog()
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

void CMFCDOGDlg::OnPaint()
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
HCURSOR CMFCDOGDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


#include "Maltese.h"
void CMFCDOGDlg::OnBnClickedPuppySearchBtn()
{
	Maltese* maltese = new Maltese();
	CString str = maltese->getBreed();


	CString searchData = _T("");
	// Edit Control의 값을 가져와서 searchData 변수에 대입
	m_puppy_search_bar.GetWindowTextW(searchData);
	MessageBox(searchData);

	// Edit Control에 입력된 값이 있다면
	if (searchData.IsEmpty() == false) {
		
		// 현재 ListBox에서 선택된 아이템의 인덱스를 받아오기
		int nCurSel = m_puppy_content.GetCurSel();

		m_puppy_content.AddString(_T("'") + searchData + "' 를 검색하셨습니다.");
		m_puppy_content.InsertString(nCurSel, str);
		m_puppy_content.InsertString(nCurSel, str);
		m_puppy_content.InsertString(nCurSel, str);
		m_puppy_content.InsertString(nCurSel, str);

		
		// Edit Control 문자열 지우기
		m_puppy_search_bar.SetWindowTextW(_T(""));
	}
}

#include "Maltese.h" 
void CMFCDOGDlg::OnBnClickedPuppyTextFileOpen()
{
	Maltese* pp = (Maltese*)new Puppy();
	pp->setBreed(_T("말티즈"));
	CString str = pp->getBreed();
	MessageBox(str);

	Maltese* pp2 = new Maltese();
	MessageBox(pp2->displayPuppy());

	delete pp;


}

void CMFCDOGDlg::OnBnClickedPuppyTextFileModify()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

