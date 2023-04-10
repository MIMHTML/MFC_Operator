#pragma once
#include "afxdialogex.h"
#include "Puppy.h"
#include "PuppyReference.h"


// CChildPuppy 대화 상자

class CChildPuppy : public CDialog
{
	DECLARE_DYNAMIC(CChildPuppy)

public:

	CChildPuppy(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CChildPuppy();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHILD_PUPPY};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_modify_content;
	CEdit m_modify_breed;
	afx_msg void OnBnClickedModifyButton();
	virtual BOOL OnInitDialog();
	CString m_modify_content_value;

	void setBreed(CString, CString);
	CString m_modify_breed_value;
};
