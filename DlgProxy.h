
// DlgProxy.h: ͷ�ļ�
//

#pragma once

class CAutoVoteDlg;


// CAutoVoteDlgAutoProxy ����Ŀ��

class CAutoVoteDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CAutoVoteDlgAutoProxy)

	CAutoVoteDlgAutoProxy();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��

// ����
public:
	CAutoVoteDlg* m_pDialog;

// ����
public:

// ��д
	public:
	virtual void OnFinalRelease();

// ʵ��
protected:
	virtual ~CAutoVoteDlgAutoProxy();

	// ���ɵ���Ϣӳ�亯��

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CAutoVoteDlgAutoProxy)

	// ���ɵ� OLE ����ӳ�亯��

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

