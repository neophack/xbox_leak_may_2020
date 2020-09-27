// $$dlg_ifile$$.cpp : �C���v�������e�[�V���� �t�@�C��
//

#include "stdafx.h"
#include "$$root$$.h"
#include "$$dlg_hfile$$.h"
$$IF(AUTOMATION)
#include "$$dlgautoproxy_hfile$$.h"
$$ENDIF //AUTOMATION

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

$$IF(ABOUT)
/////////////////////////////////////////////////////////////////////////////
// �A�v���P�[�V�����̃o�[�W�������Ŏg���Ă��� CAboutDlg �_�C�A���O

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂�
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �̃T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// ���b�Z�[�W �n���h��������܂���B
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

$$ENDIF //ABOUT
/////////////////////////////////////////////////////////////////////////////
// $$DLG_CLASS$$ �_�C�A���O
$$IF(AUTOMATION)

IMPLEMENT_DYNAMIC($$DLG_CLASS$$, $$DLG_BASE_CLASS$$);
$$ENDIF //AUTOMATION

$$DLG_CLASS$$::$$DLG_CLASS$$(CWnd* pParent /*=NULL*/)
	: $$DLG_BASE_CLASS$$($$DLG_CLASS$$::IDD, pParent)
{
	//{{AFX_DATA_INIT($$DLG_CLASS$$)
		// ����: ���̈ʒu�� ClassWizard �ɂ���ă����o�̏��������ǉ�����܂��B
	//}}AFX_DATA_INIT
$$IF(VERBOSE)
	// ����: LoadIcon �� Win32 �� DestroyIcon �̃T�u�V�[�P���X��v�����܂���B
$$ENDIF
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
$$IF(AUTOMATION)
	m_pAutoProxy = NULL;
$$ENDIF //AUTOMATION
}
$$IF(AUTOMATION)

$$DLG_CLASS$$::~$$DLG_CLASS$$()
{
$$IF(VERBOSE)
	// ���̃_�C�A���O�p�̃I�[�g���[�V���� �v���L�V������ꍇ�́A���̃_�C�A���O
	// �ւ̃|�C���^�� NULL �ɖ߂��܂��A����ɂ���ă_�C�A���O���폜���ꂽ����
	// ���킩��܂��B
$$ENDIF //VERBOSE
	if (m_pAutoProxy != NULL)
		m_pAutoProxy->m_pDialog = NULL;
}
$$ENDIF //AUTOMATION

void $$DLG_CLASS$$::DoDataExchange(CDataExchange* pDX)
{
	$$DLG_BASE_CLASS$$::DoDataExchange(pDX);
	//{{AFX_DATA_MAP($$DLG_CLASS$$)
		// ����: ���̏ꏊ�ɂ� ClassWizard �ɂ���� DDX �� DDV �̌Ăяo�����ǉ�����܂��B
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP($$DLG_CLASS$$, $$DLG_BASE_CLASS$$)
	//{{AFX_MSG_MAP($$DLG_CLASS$$)
$$IF(ABOUT)
	ON_WM_SYSCOMMAND()
$$ENDIF
$$IF(HELP)
	ON_WM_DESTROY()
$$ENDIF
$$IF(AUTOMATION)
	ON_WM_CLOSE()
$$ENDIF
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// $$DLG_CLASS$$ ���b�Z�[�W �n���h��

BOOL $$DLG_CLASS$$::OnInitDialog()
{
	$$DLG_BASE_CLASS$$::OnInitDialog();
$$IF(ABOUT)

	// "�o�[�W�������..." ���j���[���ڂ��V�X�e�� ���j���[�֒ǉ����܂��B

	// IDM_ABOUTBOX �̓R�}���h ���j���[�͈̔͂łȂ���΂Ȃ�܂���B
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
$$ENDIF //ABOUT

$$IF(VERBOSE)
	// ���̃_�C�A���O�p�̃A�C�R����ݒ肵�܂��B�t���[�����[�N�̓A�v���P�[�V�����̃��C��
	// �E�B���h�E���_�C�A���O�łȂ����͎����I�ɐݒ肵�܂���B
$$ENDIF //VERBOSE
	SetIcon(m_hIcon, TRUE);			// �傫���A�C�R����ݒ�
	SetIcon(m_hIcon, FALSE);		// �������A�C�R����ݒ�
	
	// TODO: ���ʂȏ��������s�����͂��̏ꏊ�ɒǉ����Ă��������B
	
	return TRUE;  // TRUE ��Ԃ��ƃR���g���[���ɐݒ肵���t�H�[�J�X�͎����܂���B
}
$$IF(ABOUT)

void $$DLG_CLASS$$::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		$$DLG_BASE_CLASS$$::OnSysCommand(nID, lParam);
	}
}
$$ENDIF //ABOUT
$$IF(HELP)

void $$DLG_CLASS$$::OnDestroy()
{
	WinHelp(0L, HELP_QUIT);
	$$DLG_BASE_CLASS$$::OnDestroy();
}
$$ENDIF //HELP

// �����_�C�A���O�{�b�N�X�ɍŏ����{�^����ǉ�����Ȃ�΁A�A�C�R����`�悷��
// �R�[�h���ȉ��ɋL�q����K�v������܂��BMFC �A�v���P�[�V������ document/view
// ���f�����g���Ă���̂ŁA���̏����̓t���[�����[�N�ɂ�莩���I�ɏ�������܂��B

void $$DLG_CLASS$$::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �`��p�̃f�o�C�X �R���e�L�X�g

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// �N���C�A���g�̋�`�̈���̒���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �A�C�R����`�悵�܂��B
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		$$DLG_BASE_CLASS$$::OnPaint();
	}
}

$$IF(VERBOSE)
// �V�X�e���́A���[�U�[���ŏ����E�B���h�E���h���b�O���Ă���ԁA
// �J�[�\����\�����邽�߂ɂ������Ăяo���܂��B
$$ENDIF
HCURSOR $$DLG_CLASS$$::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
$$IF(AUTOMATION)
$$IF(VERBOSE)

// �R���g���[�����I�u�W�F�N�g�� 1 �����܂��ێ����Ă���ꍇ�A
// �I�[�g���[�V�����T�[�o�[�̓��[�U�[�� UI �����ۂɏI����
// ���܂���B�����̃��b�Z�[�W �n���h���̓v���L�V���܂��g�p��
// ���ǂ������m�F���A���ꂩ�� UI ����\���ɂȂ�܂����_�C�A��
// �O�͂��ꂪ�����ꂽ�ꍇ���̏ꏊ�Ɏc��܂��B
$$ENDIF //VERBOSE

void $$DLG_CLASS$$::OnClose() 
{
	if (CanExit())
		$$DLG_BASE_CLASS$$::OnClose();
}

void $$DLG_CLASS$$::OnOK() 
{
	if (CanExit())
		$$DLG_BASE_CLASS$$::OnOK();
}

void $$DLG_CLASS$$::OnCancel() 
{
	if (CanExit())
		$$DLG_BASE_CLASS$$::OnCancel();
}

BOOL $$DLG_CLASS$$::CanExit()
{
$$IF(VERBOSE)
	// �v���L�V �I�u�W�F�N�g���܂��c���Ă���ꍇ�A�I�[�g���[�V����	
	// �R���g���[���͂��̃A�v���P�[�V�������܂��ێ����Ă��܂��B 
	// �_�C�A���O�̎��͎͂c���܂��� UI �͔�\���ɂȂ�܂��B
$$ENDIF //VERBOSE
	if (m_pAutoProxy != NULL)
	{
		ShowWindow(SW_HIDE);
		return FALSE;
	}

	return TRUE;
}
$$ENDIF //AUTOMATION