// CChildPuppy.cpp: 구현 파일
//

#include "pch.h"
#include "MFC_DOG.h"
#include "afxdialogex.h"
#include "CChildPuppy.h"


// CChildPuppy 대화 상자

IMPLEMENT_DYNAMIC(CChildPuppy, CDialog)

CChildPuppy::CChildPuppy(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CHILD_PUPPY, pParent)
	, m_modify_content_value(_T(""))
	, m_modify_breed_value(_T(""))
{
}

CChildPuppy::~CChildPuppy()
{
}


void CChildPuppy::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MODIFY_CONTENT, m_modify_content);
	DDX_Control(pDX, IDC_MODIFY_BREED, m_modify_breed);
	DDX_Text(pDX, IDC_MODIFY_CONTENT, m_modify_content_value);
	DDX_Text(pDX, IDC_MODIFY_BREED, m_modify_breed_value);
}


BEGIN_MESSAGE_MAP(CChildPuppy, CDialog)
//	ON_BN_CLICKED(MODIFY_OK_BUTTON, &CChildPuppy::OnBnClickedOkButton)
ON_BN_CLICKED(IDD_MODIFY_BUTTON, &CChildPuppy::OnBnClickedModifyButton)
END_MESSAGE_MAP()


// CChildPuppy 메시지 처리기

#include "MFC_DOGDlg.h"
BOOL CChildPuppy::OnInitDialog()
{
	CString breed = m_modify_breed_value;
	CString content = m_modify_content_value;

	CEdit* pEditBreed = (CEdit*)GetDlgItem(IDC_MODIFY_BREED);
	CEdit* pEditContent = (CEdit*)GetDlgItem(IDC_MODIFY_CONTENT);

	pEditBreed->SetWindowTextW(breed);
	pEditContent->SetWindowTextW(content);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}

void CChildPuppy::OnBnClickedModifyButton()
{
	CFile file;
	CFileException e;
	CString breed;
	CString content;


	CEdit* pEditBreed = (CEdit*)GetDlgItem(IDC_MODIFY_BREED);
	pEditBreed->GetWindowTextW(breed);

	// 파일 열기 (파일 없을시 생성)
	if (!file.Open(breed+_T(".txt"), CFile::modeReadWrite | CFile::modeCreate, &e)) {
		e.ReportError();
	}
	
	CEdit* pEditContent = (CEdit*)GetDlgItem(IDC_MODIFY_CONTENT);
	pEditContent->GetWindowTextW(content);

	// UTF-16 인코딩하여 내용 저장
	const TCHAR bom = 0xFEFF; // UTF-16 Little Endian BOM
	file.Write(&bom, sizeof(bom));
	file.Write(content, content.GetLength() * sizeof(TCHAR));

	// 문자열 마지막에 널 문자(null character) 추가
	const TCHAR nullchar = _T('\0');
	file.Write(&nullchar, sizeof(nullchar));

	file.Close();

	// 함수 작업 후 다이얼로그 창 닫기
	EndDialog(IDOK);
}

void CChildPuppy::setBreed(CString breed, CString content)
{
	m_modify_breed_value = breed;
	m_modify_content_value = content;
}


