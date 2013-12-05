
// AutoVoteDlg.h : ͷ�ļ�
//

#pragma once

class CAutoVoteDlgAutoProxy;


// CAutoVoteDlg �Ի���
class CAutoVoteDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAutoVoteDlg);
	friend class CAutoVoteDlgAutoProxy;

// ����
public:
	CAutoVoteDlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~CAutoVoteDlg();

// �Ի�������
	enum { IDD = IDD_AUTOVOTE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	CAutoVoteDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// ���ɵ���Ϣӳ�亯��
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
