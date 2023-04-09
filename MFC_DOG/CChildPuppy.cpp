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
}


BEGIN_MESSAGE_MAP(CChildPuppy, CDialog)
//	ON_BN_CLICKED(MODIFY_OK_BUTTON, &CChildPuppy::OnBnClickedOkButton)
ON_BN_CLICKED(IDD_MODIFY_BUTTON, &CChildPuppy::OnBnClickedModifyButton)
END_MESSAGE_MAP()


// CChildPuppy 메시지 처리기

void CChildPuppy::OnBnClickedModifyButton()
{
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_PUPPY_CONTENT);
	CString content;
	pEdit->GetWindowTextW(content);
	
	MessageBox(content);
	
	m_modify_content.SetWindowTextW(content);
}
