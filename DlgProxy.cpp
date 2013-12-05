
// DlgProxy.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AutoVote.h"
#include "DlgProxy.h"
#include "AutoVoteDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAutoVoteDlgAutoProxy

IMPLEMENT_DYNCREATE(CAutoVoteDlgAutoProxy, CCmdTarget)

CAutoVoteDlgAutoProxy::CAutoVoteDlgAutoProxy()
{
	EnableAutomation();
	
	// ΪʹӦ�ó������Զ��������ڻ״̬ʱһֱ���� 
	//	���У����캯������ AfxOleLockApp��
	AfxOleLockApp();

	// ͨ��Ӧ�ó����������ָ��
	//  �����ʶԻ������ô�����ڲ�ָ��
	//  ָ��Ի��򣬲����öԻ���ĺ���ָ��ָ��
	//  �ô���
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CAutoVoteDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CAutoVoteDlg)))
		{
			m_pDialog = reinterpret_cast<CAutoVoteDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CAutoVoteDlgAutoProxy::~CAutoVoteDlgAutoProxy()
{
	// Ϊ������ OLE �Զ����������ж������ֹӦ�ó���
	// 	������������ AfxOleUnlockApp��
	//  ���������������⣬�⻹���������Ի���
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CAutoVoteDlgAutoProxy::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CAutoVoteDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CAutoVoteDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_IAutoVote ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {5D3F01FF-9BF7-48C4-840B-2260F277BFBB}
static const IID IID_IAutoVote =
{ 0x5D3F01FF, 0x9BF7, 0x48C4, { 0x84, 0xB, 0x22, 0x60, 0xF2, 0x77, 0xBF, 0xBB } };

BEGIN_INTERFACE_MAP(CAutoVoteDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CAutoVoteDlgAutoProxy, IID_IAutoVote, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 ���ڴ���Ŀ�� StdAfx.h �ж���
// {BD59EC3D-5BC4-447C-B257-8A852DF15DCC}
IMPLEMENT_OLECREATE2(CAutoVoteDlgAutoProxy, "AutoVote.Application", 0xbd59ec3d, 0x5bc4, 0x447c, 0xb2, 0x57, 0x8a, 0x85, 0x2d, 0xf1, 0x5d, 0xcc)


// CAutoVoteDlgAutoProxy ��Ϣ�������
