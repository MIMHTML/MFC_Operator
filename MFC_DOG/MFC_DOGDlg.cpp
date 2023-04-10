
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
	DDX_Control(pDX, IDC_PUPPY_IMAGE_FILE_PATH, m_puppy_file_path);
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



void CMFCDOGDlg::OnBnClickedPuppySearchBtn()
{
	Puppy puppy;
	CFile file;
	CFileException e;
	CString searchData = _T("");

	// 각 함수의 리턴 데이터를 담을 변수
	CString displayPuppy;
	CString puppyCharacteristic;
	CString howlSound;
	CString runningSpeed;
	CString imageName;
	CString fileName;

	// Edit Control의 값을 가져와서 searchData 변수에 대입
	m_puppy_search_bar.GetWindowTextW(searchData);

	// Edit Control에 입력된 값이 있다면
	if (searchData.IsEmpty() == false) {
	
		// search data에 맞는 객체 생성
		if (searchData == _T("말티즈")) {
			Maltese puppyData = puppyData.setPuppy();
			puppy = puppyData;
			displayPuppy = puppyData.displayPuppy();
			puppyCharacteristic = puppyData.characteristic();
			imageName = _T("말티즈.jpg");
			fileName = _T("말티즈.txt");
		}
		else if (searchData == _T("치와와")) {
			Chihuahua puppyData = puppyData.setPuppy();
			puppy = puppyData;
			displayPuppy = puppyData.displayPuppy();
			puppyCharacteristic = puppyData.characteristic();
			imageName = _T("치와와.jpg");
			fileName = _T("치와와.txt");
		}
		else if (searchData == _T("푸들")) {
			Poodle puppyData = puppyData.setPuppy();
			puppy = puppyData;
			displayPuppy = puppyData.displayPuppy();
			puppyCharacteristic = puppyData.characteristic();
			imageName = _T("푸들.jpg");
			fileName = _T("푸들.txt");
		}
		else if (searchData == _T("요크셔테리어")) {
			Poodle puppyData = puppyData.setPuppy();
			puppy = puppyData;
			displayPuppy = puppyData.displayPuppy();
			puppyCharacteristic = puppyData.characteristic();
			imageName = _T("요크셔테리어.jpg");
			fileName = _T("요크셔테리어.txt");
		}
		else {
			searchData = _T("검색 결과가 없습니다.");
			imageName = _T("재입력.png");
			fileName = _T("재입력.txt");
			puppyCharacteristic = puppy.characteristic();
		}

		// breed edit control에 breed 출력
		m_puppy_breed.SetWindowTextW(searchData);
		
		// content edit control에 content 출력
		m_puppy_content.SetWindowTextW(displayPuppy + puppyCharacteristic);

		// 파일 열기 (파일 없을시 생성)
		if (!file.Open(fileName, CFile::modeReadWrite 
			| CFile::modeCreate | CFile::modeNoTruncate, &e)) {
			e.ReportError();
		}

			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_PUPPY_CONTENT);
			CString content;
			pEdit->GetWindowTextW(content);

			// UTF-16 인코딩하여 내용 저장
			const wchar_t bom = 0xFEFF; // UTF-16 Little Endian BOM
			file.Write(&bom, sizeof(bom));
			file.Write(content, content.GetLength() * sizeof(wchar_t));

			// 문자열 마지막에 널 문자(null character) 추가
			const wchar_t nullchar = L'\0';
			file.Write(&nullchar, sizeof(nullchar));

			file.Close();

		// 이미지 출력하기
		CRect rect;
		CDC* dc;
		CImage image;
		CFileDialog dlg(TRUE, _T("*.jpg"), _T("image"), OFN_HIDEREADONLY, NULL);

		m_puppy_image_view.GetWindowRect(rect);
		dc = m_puppy_image_view.GetDC();
		image.Load(imageName);
		image.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);

		m_puppy_file_path.SetWindowTextW(dlg.GetPathName());


		// Edit Control 문자열 지우기
		m_puppy_search_bar.SetWindowTextW(_T(""));
	}
}

void CMFCDOGDlg::OnBnClickedPuppyTextFileOpen()
{
	static TCHAR BASED_CODE szFilter[] = _T("이미지 파일(*.BMP, *GIF, *JPG) | *.BMP; *.GIF; *.JPG; *.bmp; *.jpg; *gif | 모든파일((*.*)|*.*||");
	CFileDialog dlg(TRUE, _T("*.jpg"), _T("image"), OFN_HIDEREADONLY, szFilter);
	if (IDOK == dlg.DoModal()) {

		// 멤버 함수
	/*
		CString GetPathName() : 선택된 파일의 절대경로
		CString GetFileName() : 선택된 파일의 이름과 확장자
		CString GetFileExt() : 선택된 파일의 확장자
		String GetFileTitle() : 선택된 파일의 파일명
		BOOL GetReadOnlyPref() : 읽기전용 여부
		POSITION GetStartPosition() : 다중 선택시 첫번째 파일의 위치
		CString GetNextPathName() : 다중 선택시 다음 파일의 절대경로
	*/
		CString fileName = dlg.GetPathName();
		m_puppy_file_path.SetWindowTextW(fileName);

		// 이미지 출력하기
		CRect rect;
		CDC* dc;
		CImage image;

		m_puppy_image_view.GetWindowRect(rect);
		dc = m_puppy_image_view.GetDC();
		image.Load(dlg.GetFileName());
		image.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);

		// 텍스트 파일 열기
		CString strFileName = dlg.GetFileTitle()+_T(".txt");

		// 파일 열기 모드로 CFile 객체를 생성합니다.
		CFile file(strFileName, CFile::modeRead | CFile::shareDenyWrite);

		// 파일 크기를 가져와 CString 객체를 생성합니다.
		ULONGLONG nFileSize = file.GetLength();
		CString strFileContent;
		strFileContent.Preallocate(nFileSize);

		// 파일 내용을 CString 객체에 저장합니다.
		file.Read(strFileContent.GetBuffer(nFileSize), nFileSize);
		strFileContent.ReleaseBuffer();

		// edit 컨트롤의 핸들을 가져옵니다.
		CWnd* pWnd = GetDlgItem(IDC_PUPPY_CONTENT); // IDC_EDIT은 edit 컨트롤의 ID입니다.
		if (pWnd != NULL)
		{
			// 핸들을 이용하여 edit 컨트롤에 파일 내용을 출력합니다.
			pWnd->SetWindowText(strFileContent);
			m_puppy_breed.SetWindowTextW(dlg.GetFileTitle());
		}
	}
}

void CMFCDOGDlg::OnBnClickedPuppyTextFileModify()
{
	CChildPuppy dlg;  // CChildDlg 자식 다이얼로그 창의 클래스 객체 생성 
	CString breed;
	CString content;
	GetDlgItemTextW(IDC_PUPPY_BREED, breed);
	GetDlgItemTextW(IDC_PUPPY_CONTENT, content);
	dlg.setBreed(breed, content);

	dlg.DoModal();  // DoModal() 를 이용하여 창을 띄웁니다. 
}

