﻿
// MFC_DOGDlg.h: 헤더 파일
//

#pragma once


// CMFCDOGDlg 대화 상자
class CMFCDOGDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCDOGDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DOG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_puppy_breed;
	CString m_puppy_content;
	CString m_puppy_image_file_path;
	afx_msg void OnBnClickedPuppyTextFileOpen();
	afx_msg void OnBnClickedPuppyTextFileModify();
	CStatic m_puppy_image_view;
};
