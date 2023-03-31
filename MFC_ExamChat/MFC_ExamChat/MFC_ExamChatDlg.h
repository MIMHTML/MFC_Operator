
// MFC_ExamChatDlg.h : header file
//

#pragma once


// CMFCExamChatDlg dialog
class CMFCExamChatDlg : public CDialogEx
{
private:
	CRect m_rect;
	CPoint m_prev_pos;
	char m_is_clicked = 0;

// Construction
public:
	CMFCExamChatDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_EXAMCHAT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_chat_list;
	afx_msg void OnBnClickedAddBtn();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};
