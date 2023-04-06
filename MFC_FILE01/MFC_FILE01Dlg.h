
// MFC_FILE01Dlg.h: 헤더 파일
//

#pragma once


// CMFCFILE01Dlg 대화 상자
class CMFCFILE01Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCFILE01Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_FILE01_DIALOG };
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
	CStatic m_image_view;
	afx_msg void OnBnClickedImageButton();
	CListCtrl m_list;
	CString m_strName;
	CString m_strAge;
	afx_msg void OnBnClickedAddButton();
	afx_msg void OnBnClickedDeleteButton();
	afx_msg void OnBnClickedFileButton();
};
