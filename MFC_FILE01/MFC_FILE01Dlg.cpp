
// MFC_FILE01Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "MFC_FILE01.h"
#include "MFC_FILE01Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFCFILE01Dlg 대화 상자

#include <vector>

CMFCFILE01Dlg::CMFCFILE01Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_FILE01_DIALOG, pParent)
	, m_strName(_T(""))
	, m_strAge(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCFILE01Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_IMAGE_VIEW, m_image_view);
	DDX_Control(pDX, IDC_LIST_EXAM, m_list);
	DDX_Text(pDX, IDC_NAME_EDIT, m_strName);
	DDX_Text(pDX, IDC_AGE_EDIT, m_strAge);
}

BEGIN_MESSAGE_MAP(CMFCFILE01Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_IMAGE_BUTTON, &CMFCFILE01Dlg::OnBnClickedImageButton)
	ON_BN_CLICKED(IDC_ADD_BUTTON, &CMFCFILE01Dlg::OnBnClickedAddButton)
	ON_BN_CLICKED(IDC_DELETE_BUTTON, &CMFCFILE01Dlg::OnBnClickedDeleteButton)
	ON_BN_CLICKED(IDC_FILE_BUTTON, &CMFCFILE01Dlg::OnBnClickedFileButton)
	ON_BN_CLICKED(IDC_FILE_NAME_BUTTON, &CMFCFILE01Dlg::OnBnClickedFileNameButton)
	ON_BN_CLICKED(IDC_FILE_OPEN_BUTTON, &CMFCFILE01Dlg::OnBnClickedFileOpenButton)
	ON_BN_CLICKED(IDC_CHILD_BUTTON, &CMFCFILE01Dlg::OnBnClickedChildButton)
	ON_BN_CLICKED(IDC_IMAGE_REMOVE, &CMFCFILE01Dlg::OnBnClickedImageRemove)
END_MESSAGE_MAP()


// CMFCFILE01Dlg 메시지 처리기

BOOL CMFCFILE01Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.


	// 리스트 컨트롤의 크기를 얻어온다.
	CRect rect;
	m_list.GetClientRect(&rect);

	// 리스트 컨트롤 컬럼 추가
	//	- 첫번째 인자: 컬럼의 인덱스
	//	- 두번째 인자: 컬럼의 제목
	//	- 세번째 인자: 컬럼의 정렬방식 (LVCFMT_LEFT => 왼쪽 정렬)
	//	- 네번째 인자: 컬럼의 너비
	m_list.InsertColumn(0, _T("이름"), LVCFMT_LEFT, 300);

	// 마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한
	// 컬럼들의 너비를 뺀 값으로 하면 2개의 컬럼이 리스트 컨트롤에 딱 맞게 됩니다.
	m_list.InsertColumn(1, _T("나이"), LVCFMT_LEFT, rect.Width() - 300);

	//서브 항목으로 추가할 데이터를 배열에 저장
	CString sampleName[] = { _T("김명일"), _T("김명일2") };
	CString sampleAge[] = { _T("23"), _T("33") };


	// InsertItem() 함수와 SetItemText() 함수를 사용하여 리스트 컨트롤에 데이터를 추가합니다.
	//	1) InsertItem()
	//		- 첫번째 인자: 항목의 인덱스
	//		- 두번째 인자: 항목의 텍스트
	//		- 세번째 인자: 항목의 이미지 인덱스
	
	//	2) SetItemText()
	//		- 첫번째 인자: 항목의 인덱스
	//		- 두번째 인자: 항목의 서브항목 인덱스
	//		- 세번째 인자: 항목의 텍스트
	for (int i = 0; i < 2; i++) {
		//이름 추가하기
		m_list.InsertItem(i, sampleName[i], i % 5);

		//나이 추가하기
		m_list.SetItemText(i, 1, sampleAge[i]);
	}


	
	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CMFCFILE01Dlg::OnPaint()
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
HCURSOR CMFCFILE01Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCFILE01Dlg::OnBnClickedImageButton()
{
	CRect rect;
	CDC* dc;
	CImage image;

	m_image_view.GetWindowRect(rect);
	dc = m_image_view.GetDC();



	int random = rand() % 10;
	CString randomStr_beforeFormat;
	CString randomStr;
	randomStr_beforeFormat.Format(_T("%d"), random);
	randomStr = randomStr_beforeFormat + L"jpg"; 
	
	image.Load(L"5.jpg");
	image.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);
}

void CMFCFILE01Dlg::OnBnClickedAddButton()
{
	// 추가할 행의 위치를 얻어오기 위해서 리스트 컨트롤에 항목의 개수를 얻어온다.
	UpdateData(TRUE);

	int nItemNum = m_list.GetItemCount();

	CString name = m_strName;
	CString age = m_strAge;

	// 이름 추가하기
	m_list.InsertItem(nItemNum, name, rand() % 5);

	// 나이 추가하기
	m_list.SetItemText(nItemNum, 1, age);

	// 에디트 컨트롤에 입력한 값을 리스트 컨트롤에 추가하였다면
	// 에디트 컨트롤을 초기화 합니다.	
	m_strName = _T("");
	m_strAge = _T("");

	UpdateData(FALSE);
}


void CMFCFILE01Dlg::OnBnClickedDeleteButton()
{
	int count = m_list.GetItemCount(); // 리스트 컨트롤의 현재 항목 수를 얻어옵니다.

	for (int i = count; i >= 0; i--) { // 모든 항목을 조사하여
		if (m_list.GetItemState(i, LVIS_SELECTED) != 0) // 선택된 항목을 삭제
		{
			m_list.DeleteItem(i);
		}
	
	}
}

void CMFCFILE01Dlg::OnBnClickedFileButton()
{
	CFile file;
	std::vector<CString> vServiceTest;

	for (int i = 0; i < 10; i++) {
		vServiceTest.push_back(_T("10\n"));
	}

	file.Open(_T("Txt1.txt"), CFile::modeCreate | CFile::modeWrite, NULL);

	for (int i = 0; i < vServiceTest.size(); i++) {
		file.Write(vServiceTest.at(i), vServiceTest.at(i).GetLength() * sizeof(TCHAR));
	}

	file.Close();

	MessageBox(_T("Txt1.txt 파일 저장 완료"));
}

// 현재 실행된 파일 관련된 경로

// File Path 
CString GetProgramPath() {
	CString strPath;
	TCHAR szPath[1024];
	GetModuleFileName(NULL, szPath, 1024);
	strPath.Format(_T("%s"), szPath);
	return strPath;
}

// Path
CString GetProgramDir() {
	CString strPath;
	TCHAR szPath[1024];
	GetModuleFileName(NULL, szPath, 1024);
	strPath.Format(_T("%s"), szPath);
	strPath = strPath.Left(strPath.ReverseFind('\\') + 1);
	return strPath;
};

// 경로에서 파일 이름 가져오기
CString GetFileName(CString strPath) {
	CString strFileName;
	strFileName = strPath.Right(strPath.GetLength() - strPath.ReverseFind('\\'));
	return strFileName;
}

void CMFCFILE01Dlg::OnBnClickedFileNameButton()
{
	CString path = GetProgramPath();
	CString dir = GetProgramDir();
	CString name = GetFileName(path);


		MessageBox(path);
		MessageBox(dir);
		MessageBox(name);

		m_list.InsertItem(m_list.GetItemCount(), name, rand() % 5);

		
}


void CMFCFILE01Dlg::OnBnClickedFileOpenButton()
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
		CString fileName = dlg.GetFileName();
		MessageBox(fileName);
		m_list.InsertItem(m_list.GetItemCount(), fileName, rand() % 5);

		CRect rect;
		CDC* dc;
		CImage image;

		m_image_view.GetWindowRect(rect);
		dc = m_image_view.GetDC();
		image.Load(fileName);
		image.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);
	}
}

#include "CChildDlg.h"
void CMFCFILE01Dlg::OnBnClickedChildButton()
{
	CChildDlg dlg;  // CChildDlg 자식 다이얼로그 창의 클래스 객체 생성
	dlg.DoModal();  // DoModal() 를 이용하여 창을 띄웁니다.
}


void CMFCFILE01Dlg::OnBnClickedImageRemove()
{

}
