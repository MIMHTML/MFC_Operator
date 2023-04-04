
// MFC_OperatorDlg.h : header file
//

#pragma once


// CMFCOperatorDlg dialog
class CMFCOperatorDlg : public CDialogEx
{
// Construction
public:
	CMFCOperatorDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_OPERATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	double m_a;
	double m_b;
	double m_c;
public:
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMultiply();
	afx_msg void OnBnClickedButtonDevide();
	afx_msg void OnBnClickedButtonRemain();
	afx_msg void OnBnClickedButtonEq();
	afx_msg void OnBnClickedButtonNoteq();
	afx_msg void OnBnClickedButtonAtb();
	afx_msg void OnBnClickedButtonAteb();
	afx_msg void OnBnClickedButtonAteb2();
	afx_msg void OnBnClickedButtonNumber();
	afx_msg void OnBnClickedButtonTime();
	afx_msg void OnBnClickedButtonBnot();
	afx_msg void OnBnClickedButtonLs();
	afx_msg void OnBnClickedButtonRs();
};
