
// AutoVoteDlg.h : 头文件
//

#pragma once

class CAutoVoteDlgAutoProxy;


// CAutoVoteDlg 对话框
class CAutoVoteDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAutoVoteDlg);
	friend class CAutoVoteDlgAutoProxy;

// 构造
public:
	CAutoVoteDlg(CWnd* pParent = NULL);	// 标准构造函数
	virtual ~CAutoVoteDlg();

// 对话框数据
	enum { IDD = IDD_AUTOVOTE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	CAutoVoteDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
