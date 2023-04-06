// CChildDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MFC_FILE01.h"
#include "afxdialogex.h"
#include "CChildDlg.h"


// CChildDlg 대화 상자

IMPLEMENT_DYNAMIC(CChildDlg, CDialog)

CChildDlg::CChildDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_NEW_DIALOG, pParent)
	, m_name_edit(_T(""))
	, m_content_edit(_T(""))
{

}

CChildDlg::~CChildDlg()
{
}

void CChildDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME_EDIT, m_name_edit);
	DDX_Text(pDX, IDC_CONTENT_EDIT, m_content_edit);
}


BEGIN_MESSAGE_MAP(CChildDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CChildDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_MODIFIER_BTN, &CChildDlg::OnBnClickedModifierBtn)
END_MESSAGE_MAP()


// CChildDlg 메시지 처리기


void CChildDlg::OnBnClickedButton1()
{
	MessageBox(_T("안녕하세요"));
}

void CChildDlg::OnBnClickedModifierBtn()
{

}
