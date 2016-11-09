// TeachCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TeachC.h"
#include "TeachCDlg.h"
#include "deelx.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
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
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeachCDlg dialog

CTeachCDlg::CTeachCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTeachCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTeachCDlg)
	m_nRadioA = -1;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTeachCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTeachCDlg)
	DDX_Control(pDX, IDC_EDIT_RESUALT, m_edtRes);
	DDX_Control(pDX, IDC_EDIT_CAL_LINE, m_ctrlCalLine);
	DDX_Control(pDX, IDC_BUTTON_NO, m_ctrlNO);
	DDX_Control(pDX, IDC_COMBO_NUM, m_ctrlNum);
	DDX_Control(pDX, IDC_BUTTON_XOR, m_ctrlXor);
	DDX_Control(pDX, IDC_BUTTON_WITH, m_ctrlWith);
	DDX_Control(pDX, IDC_BUTTON_RIGHT, m_ctrlRight);
	DDX_Control(pDX, IDC_BUTTON_PLUS, m_ctrlPlus);
	DDX_Control(pDX, IDC_BUTTON_PERHAPS, m_ctrlPerhaps);
	DDX_Control(pDX, IDC_BUTTON_OR, m_ctrlOr);
	DDX_Control(pDX, IDC_BUTTON_OPPSITE, m_ctrlOppsite);
	DDX_Control(pDX, IDC_BUTTON_NOEQUAL, m_ctrlNoEqual);
	DDX_Control(pDX, IDC_BUTTON_MUL, m_ctrlMul);
	DDX_Control(pDX, IDC_BUTTON_MINUS, m_ctrlMinus);
	DDX_Control(pDX, IDC_BUTTON_LEFT, m_ctrlLeft);
	DDX_Control(pDX, IDC_BUTTON_EQUAL, m_ctrlEqual);
	DDX_Control(pDX, IDC_BUTTON_DIV, m_ctrlDiv);
	DDX_Control(pDX, IDC_BUTTON_B, m_ctrlB);
	DDX_Control(pDX, IDC_BUTTON_AND, m_ctrlAnd);
	DDX_Control(pDX, IDC_BUTTON_A, m_ctrlA);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT8, m_ctrlMBit8);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT7, m_ctrlMBit7);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT6, m_ctrlMBit6);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT5, m_ctrlMBit5);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT4, m_ctrlMBit4);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT3, m_ctrlMBit3);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT2, m_ctrlMBit2);
	DDX_Control(pDX, IDC_STATIC_MAIN_BIT1, m_ctrlMBit1);
	DDX_Control(pDX, IDC_STATIC_HEX_C, m_ctrlHexC);
	DDX_Control(pDX, IDC_STATIC_HEX_B, m_ctrlHexB);
	DDX_Control(pDX, IDC_STATIC_HEX_A, m_ctrlHexA);
	DDX_Control(pDX, IDC_STATIC_C_BIT8, m_ctrlCBit8);
	DDX_Control(pDX, IDC_STATIC_C_BIT7, m_ctrlCBit7);
	DDX_Control(pDX, IDC_STATIC_C_BIT6, m_ctrlCBit6);
	DDX_Control(pDX, IDC_STATIC_C_BIT5, m_ctrlCBit5);
	DDX_Control(pDX, IDC_STATIC_C_BIT4, m_ctrlCBit4);
	DDX_Control(pDX, IDC_STATIC_C_BIT3, m_ctrlCBit3);
	DDX_Control(pDX, IDC_STATIC_C_BIT2, m_ctrlCBit2);
	DDX_Control(pDX, IDC_STATIC_C_BIT1, m_ctrlCBit1);
	DDX_Control(pDX, IDC_STATIC_B_BIT8, m_ctrlBBit8);
	DDX_Control(pDX, IDC_STATIC_B_BIT7, m_ctrlBBit7);
	DDX_Control(pDX, IDC_STATIC_B_BIT6, m_ctrlBBit6);
	DDX_Control(pDX, IDC_STATIC_B_BIT5, m_ctrlBBit5);
	DDX_Control(pDX, IDC_STATIC_B_BIT4, m_ctrlBBit4);
	DDX_Control(pDX, IDC_STATIC_B_BIT3, m_ctrlBBit3);
	DDX_Control(pDX, IDC_STATIC_B_BIT2, m_ctrlBBit2);
	DDX_Control(pDX, IDC_STATIC_B_BIT1, m_ctrlBBit1);
	DDX_Control(pDX, IDC_STATIC_A_BIT8, m_ctrlABit8);
	DDX_Control(pDX, IDC_STATIC_A_BIT7, m_ctrlABit7);
	DDX_Control(pDX, IDC_STATIC_A_BIT6, m_ctrlABit6);
	DDX_Control(pDX, IDC_STATIC_A_BIT5, m_ctrlABit5);
	DDX_Control(pDX, IDC_STATIC_A_BIT4, m_ctrlABit4);
	DDX_Control(pDX, IDC_STATIC_A_BIT3, m_ctrlABit3);
	DDX_Control(pDX, IDC_STATIC_A_BIT2, m_ctrlABit2);
	DDX_Control(pDX, IDC_STATIC_A_BIT1, m_ctrlABit1);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE8, m_edtTrue8);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE7, m_edtTrue7);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE6, m_edtTrue6);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE5, m_edtTrue5);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE4, m_edtTrue4);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE3, m_edtTrue3);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE2, m_edtTrue2);
	DDX_Control(pDX, IDC_EDIT_MAIN_TRUE1, m_edtTrue1);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG8, m_edtNeg8);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG7, m_edtNeg7);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG6, m_edtNeg6);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG5, m_edtNeg5);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG4, m_edtNeg4);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG3, m_edtNeg3);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG2, m_edtNeg2);
	DDX_Control(pDX, IDC_EDIT_MAIN_NEG1, m_edtNeg1);
	DDX_Control(pDX, IDC_EDIT_MAIN_HEX2, m_edtHex2);
	DDX_Control(pDX, IDC_EDIT_MAIN_HEX1, m_edtHex1);
	DDX_Control(pDX, IDC_EDIT_MAIN_HEX_FLAG, m_edtHexFlag);
	DDX_Control(pDX, IDC_EDIT_MAIN_DEC_FLAG, m_edtDecFlag);
	DDX_Control(pDX, IDC_EDIT_MAIN_DEC, m_edtDec);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM8, m_edtCom8);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM7, m_edtCom7);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM6, m_edtCom6);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM5, m_edtCom5);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM4, m_edtCom4);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM3, m_edtCom3);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM2, m_edtCom2);
	DDX_Control(pDX, IDC_EDIT_MAIN_COM1, m_edtCom1);
	DDX_Control(pDX, IDC_CHECK_FLAG, m_ctrlFlag);
	DDX_Radio(pDX, IDC_RADIO_A, m_nRadioA);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTeachCDlg, CDialog)
	//{{AFX_MSG_MAP(CTeachCDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_RADIO_A, OnRadioA)
	ON_BN_CLICKED(IDC_RADIO_B, OnRadioB)
	ON_BN_CLICKED(IDC_RADIO_C, OnRadioC)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT8, OnStaticMainBit8)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT7, OnStaticMainBit7)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT6, OnStaticMainBit6)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT5, OnStaticMainBit5)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT4, OnStaticMainBit4)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT3, OnStaticMainBit3)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT2, OnStaticMainBit2)
	ON_BN_CLICKED(IDC_STATIC_MAIN_BIT1, OnStaticMainBit1)
	ON_BN_CLICKED(IDC_CHECK_FLAG, OnCheckFlag)
	ON_BN_CLICKED(IDC_BUTTON_A, OnButtonA)
	ON_BN_CLICKED(IDC_BUTTON_B, OnButtonB)
	ON_BN_CLICKED(IDC_BUTTON_CAL, OnButtonCal)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, OnButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_PLUS, OnButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, OnButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MUL, OnButtonMul)
	ON_BN_CLICKED(IDC_BUTTON_DIV, OnButtonDiv)
	ON_BN_CLICKED(IDC_BUTTON_WITH, OnButtonWith)
	ON_BN_CLICKED(IDC_BUTTON_PERHAPS, OnButtonPerhaps)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, OnButtonEqual)
	ON_BN_CLICKED(IDC_BUTTON_NOEQUAL, OnButtonNoequal)
	ON_BN_CLICKED(IDC_BUTTON_AND, OnButtonAnd)
	ON_BN_CLICKED(IDC_BUTTON_OR, OnButtonOr)
	ON_BN_CLICKED(IDC_BUTTON_XOR, OnButtonXor)
	ON_BN_CLICKED(IDC_BUTTON_OPPSITE, OnButtonOppsite)
	ON_BN_CLICKED(IDC_BUTTON_NO, OnButtonNo)
	ON_BN_CLICKED(IDC_BUTTON_LEFT, OnButtonLeft)
	ON_BN_CLICKED(IDC_BUTTON_RIGHT, OnButtonRight)
	ON_CBN_SELENDOK(IDC_COMBO_NUM, OnSelendokComboNum)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeachCDlg message handlers

BOOL CTeachCDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	hInstance = ::AfxGetInstanceHandle();
	hLight = ::LoadBitmap(hInstance,MAKEINTRESOURCE(IDB_BITMAP_LIGHT));
	hUnlight = ::LoadBitmap(hInstance,MAKEINTRESOURCE(IDB_BITMAP_UNLIGHT));
	int i,j;

	pMainEdit[0][0] = &m_edtTrue1;
	pMainEdit[0][1] = &m_edtTrue2;
	pMainEdit[0][2] = &m_edtTrue3;
	pMainEdit[0][3] = &m_edtTrue4;
	pMainEdit[0][4] = &m_edtTrue5;
	pMainEdit[0][5] = &m_edtTrue6;
	pMainEdit[0][6] = &m_edtTrue7;
	pMainEdit[0][7] = &m_edtTrue8;
	pMainEdit[1][0] = &m_edtNeg1;
	pMainEdit[1][1] = &m_edtNeg2;
	pMainEdit[1][2] = &m_edtNeg3;
	pMainEdit[1][3] = &m_edtNeg4;
	pMainEdit[1][4] = &m_edtNeg5;
	pMainEdit[1][5] = &m_edtNeg6;
	pMainEdit[1][6] = &m_edtNeg7;
	pMainEdit[1][7] = &m_edtNeg8;
	pMainEdit[2][0] = &m_edtCom1;
	pMainEdit[2][1] = &m_edtCom2;
	pMainEdit[2][2] = &m_edtCom3;
	pMainEdit[2][3] = &m_edtCom4;
	pMainEdit[2][4] = &m_edtCom5;
	pMainEdit[2][5] = &m_edtCom6;
	pMainEdit[2][6] = &m_edtCom7;
	pMainEdit[2][7] = &m_edtCom8;
	pPicSta[0][0] = &m_ctrlABit1;
	pPicSta[0][1] = &m_ctrlABit2;
	pPicSta[0][2] = &m_ctrlABit3;
	pPicSta[0][3] = &m_ctrlABit4;
	pPicSta[0][4] = &m_ctrlABit5;
	pPicSta[0][5] = &m_ctrlABit6;
	pPicSta[0][6] = &m_ctrlABit7;
	pPicSta[0][7] = &m_ctrlABit8;
	pPicSta[1][0] = &m_ctrlBBit1;
	pPicSta[1][1] = &m_ctrlBBit2; 
	pPicSta[1][2] = &m_ctrlBBit3;
	pPicSta[1][3] = &m_ctrlBBit4;
	pPicSta[1][4] = &m_ctrlBBit5;
	pPicSta[1][5] = &m_ctrlBBit6;
	pPicSta[1][6] = &m_ctrlBBit7;
	pPicSta[1][7] = &m_ctrlBBit8;
	pPicSta[2][0] = &m_ctrlCBit1;
	pPicSta[2][1] = &m_ctrlCBit2;
	pPicSta[2][2] = &m_ctrlCBit3;
	pPicSta[2][3] = &m_ctrlCBit4;
	pPicSta[2][4] = &m_ctrlCBit5;
	pPicSta[2][5] = &m_ctrlCBit6;
	pPicSta[2][6] = &m_ctrlCBit7;
	pPicSta[2][7] = &m_ctrlCBit8;
	pMainSta[0] = &m_ctrlMBit1;
	pMainSta[1] = &m_ctrlMBit2;
	pMainSta[2] = &m_ctrlMBit3;
	pMainSta[3] = &m_ctrlMBit4;
	pMainSta[4] = &m_ctrlMBit5;
	pMainSta[5] = &m_ctrlMBit6;
	pMainSta[6] = &m_ctrlMBit7;
	pMainSta[7] = &m_ctrlMBit8;
	pHex[0] = &m_ctrlHexA;
	pHex[1] = &m_ctrlHexB;
	pHex[2] = &m_ctrlHexC;

	pButton[ID_PLUS] = &m_ctrlPlus;
	pButton[ID_MINUS] = &m_ctrlMinus;
	pButton[ID_MUL] = &m_ctrlMul;
	pButton[ID_DIV] = &m_ctrlDiv;
	pButton[ID_AND] = &m_ctrlAnd;
	pButton[ID_OR] = &m_ctrlOr;
	pButton[ID_XOR] = &m_ctrlXor;
	pButton[ID_OPPSITE] = &m_ctrlOppsite;
	pButton[ID_NO] = &m_ctrlNO;
	pButton[ID_WITH] = &m_ctrlWith;
	pButton[ID_PERHAPS] = &m_ctrlPerhaps;
	pButton[ID_EQUAL] = &m_ctrlEqual;
	pButton[ID_NOEQUAL] = &m_ctrlNoEqual;
	pButton[ID_LEFT] = &m_ctrlLeft;
	pButton[ID_RIGHT] = &m_ctrlRight;

	m_nRadioA = 0;
	m_setTime = 0;
	m_CalTime = 0;
	m_nNum = 1;
	m_ctrlNum.SetCurSel(1);
	m_bFlag = FALSE;
	CString strCal;
	strCal = "C =";
	m_ctrlCalLine.SetWindowText(strCal);
	InitMessage();
	UpdateData(FALSE);
	SetMainBit();
	for (i = 0 ; i < DATA_NUM; i++)
	{
		for (j = 0; j < BYTE_LEN; j ++)
		{
 			pPicSta[i][j]->SetBitmap(hLight);
		}
	}
	for (i = 0 ; i < BYTE_LEN; i++)
	{
		bMainLight[i] = TRUE;
	}
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	
	m_ctrlNum.EnableWindow(FALSE);
	for (i = 0 ; i < ID_MAX - 2; i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}

	pButton[ID_NO]->EnableWindow(TRUE);
	pButton[ID_OPPSITE]->EnableWindow(TRUE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTeachCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTeachCDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTeachCDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTeachCDlg::OnRadioA() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	ProcMainLight();
}

void CTeachCDlg::OnRadioB() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	ProcMainLight();
}

void CTeachCDlg::OnRadioC() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	ProcMainLight();
}

void CTeachCDlg::OnStaticMainBit8() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[7] == TRUE)
	{
		pMainSta[7]->SetBitmap(hUnlight);
		bMainLight[7] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(7,FALSE);
	} 
	else
	{
		pMainSta[7]->SetBitmap(hLight);
		bMainLight[7] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(7,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit7() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[6] == TRUE)
	{
		pMainSta[6]->SetBitmap(hUnlight);
		bMainLight[6] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(6,FALSE);
	} 
	else
	{
		pMainSta[6]->SetBitmap(hLight);
		bMainLight[6] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(6,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit6() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[5] == TRUE)
	{
		pMainSta[5]->SetBitmap(hUnlight);
		bMainLight[5] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(5,FALSE);
	} 
	else
	{
		pMainSta[5]->SetBitmap(hLight);
		bMainLight[5] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(5,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit5() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[4] == TRUE)
	{
		pMainSta[4]->SetBitmap(hUnlight);
		bMainLight[4] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(4,FALSE);
	} 
	else
	{
		pMainSta[4]->SetBitmap(hLight);
		bMainLight[4] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(4,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit4() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[3] == TRUE)
	{
		pMainSta[3]->SetBitmap(hUnlight);
		bMainLight[3] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(3,FALSE);
	} 
	else
	{
		pMainSta[3]->SetBitmap(hLight);
		bMainLight[3] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(3,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit3() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[2] == TRUE)
	{
		pMainSta[2]->SetBitmap(hUnlight);
		bMainLight[2] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(2,FALSE);
	} 
	else
	{
		pMainSta[2]->SetBitmap(hLight);
		bMainLight[2] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(2,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit2() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[1] == TRUE)
	{
		pMainSta[1]->SetBitmap(hUnlight);
		bMainLight[1] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(1,FALSE);
	} 
	else
	{
		pMainSta[1]->SetBitmap(hLight);
		bMainLight[1] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(1,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnStaticMainBit1() 
{
	// TODO: Add your control notification handler code here
	if (bMainLight[0] == TRUE)
	{
		pMainSta[0]->SetBitmap(hUnlight);
		bMainLight[0] = FALSE;
		m_ByteData[m_nRadioA].SetTrue(0,FALSE);
	} 
	else
	{
		pMainSta[0]->SetBitmap(hLight);
		bMainLight[0] = TRUE;
		m_ByteData[m_nRadioA].SetTrue(0,TRUE);
	}
	m_ByteData[m_nRadioA].ProcByteData();
	SetMainBit();
	ProcSingleLight(m_nRadioA);
}

void CTeachCDlg::OnCheckFlag() 
{
	// TODO: Add your control notification handler code here
	int i;
	if (m_ctrlFlag.GetCheck() == 1)
	{
		m_bFlag = TRUE;
	} 
	else
	{
		m_bFlag = FALSE;
	}
	for (i = 0 ; i < DATA_NUM; i++)
	{
		m_ByteData[i].SetFlag(m_bFlag);
		m_ByteData[i].ProcByteData();
	}
	CString strHex;
	for (i = 0 ; i < DATA_NUM;i ++)
	{
		strHex = m_ByteData[i].GetStrHex();
		pHex[i]->SetWindowText(strHex);
	}
	SetMainBit();
	SetMainData(m_nRadioA);
}

void CTeachCDlg::ProcLight()
{
	int i;
	ProcMainLight();
	for (i = 0 ; i < DATA_NUM; i++)
	{
		ProcSingleLight(i);
	}
}

void CTeachCDlg::ProcMainLight()
{
	int i;
	for (i = 0 ; i < BYTE_LEN; i ++)
	{
		if(m_ByteData[m_nRadioA].GetTrue(i))
		{
			pMainSta[i]->SetBitmap(hLight);
			bMainLight[i] = TRUE;
		}
		else
		{
			pMainSta[i]->SetBitmap(hUnlight);
			bMainLight[i] = FALSE;
		}
	}
	SetMainBit();
}

void CTeachCDlg::ProcSingleLight(int n)
{
	int i;
	for (i = 0 ; i < BYTE_LEN; i++)
	{
		if (m_ByteData[n].GetTrue(i))
		{
			pPicSta[n][i]->SetBitmap(hLight);
		} 
		else
		{
			pPicSta[n][i]->SetBitmap(hUnlight);
		}
	}
	CString strHex;
	strHex = m_ByteData[n].GetStrHex();
	pHex[n]->SetWindowText(strHex);
}

void CTeachCDlg::SetMainBit()
{
	int i;
	for (i = 0 ; i < BYTE_LEN; i++)
	{
		if(m_ByteData[m_nRadioA].GetTrue(i))
		{
			pMainEdit[0][i]->SetWindowText("1");
		}
		else
		{
			pMainEdit[0][i]->SetWindowText("0");
		}
		if (m_ByteData[m_nRadioA].GetNeg(i))
		{
			pMainEdit[1][i]->SetWindowText("1");
		} 
		else
		{
			pMainEdit[1][i]->SetWindowText("0");
		}
		if (m_ByteData[m_nRadioA].GetCom(i))
		{
			pMainEdit[2][i]->SetWindowText("1");
		} 
		else
		{
			pMainEdit[2][i]->SetWindowText("0");
		}
	}
	SetMainData(m_nRadioA);
}

void CTeachCDlg::SetMainData(int n)
{
	CString strHex1,strHex2,strDec,strHex,strFlag;
	int nHex1,nHex2;
	char *p;
	strHex = m_ByteData[n].GetStrHex();
	strDec = m_ByteData[n].GetStrDec();
	if (m_bFlag)
	{
		if (m_ByteData[n].GetTrue(BYTE_LEN - 1) == TRUE)
		{
			strFlag = "-";
			m_edtHexFlag.SetWindowText(strFlag);
			m_edtDecFlag.SetWindowText(strFlag);
			strHex1 = strHex.Mid(1,1);
			strHex2 = strHex.Right(1);
			m_edtHex1.SetWindowText(strHex1);
			m_edtHex2.SetWindowText(strHex2);
			nHex1 = strtol(strHex1,&p,16);
			nHex2 = strtol(strHex2,&p,16);
			strHex1.Format("%d",nHex1);
			strHex2.Format("%d",nHex2);
			strDec = "(" + strHex1 + " * 16 + " + strHex2 + ") = " + strDec;
			m_edtDec.SetWindowText(strDec);
		} 
		else
		{
			strFlag = "+";
			m_edtHexFlag.SetWindowText(strFlag);
			m_edtDecFlag.SetWindowText(strFlag);
			strHex1 = strHex.Mid(0,1);
			strHex2 = strHex.Right(1);
			m_edtHex1.SetWindowText(strHex1);
			m_edtHex2.SetWindowText(strHex2);
			nHex1 = strtol(strHex1,&p,16);
			nHex2 = strtol(strHex2,&p,16);
			strHex1.Format("%d",nHex1);
			strHex2.Format("%d",nHex2);
			strDec = "(" + strHex1 + " * 16 + " + strHex2 + ") = " + strDec;
			m_edtDec.SetWindowText(strDec);
		}
	} 
	else
	{
		strFlag = "+";
		m_edtHexFlag.SetWindowText(strFlag);
		m_edtDecFlag.SetWindowText(strFlag);
		strHex1 = strHex.Mid(0,1);
		strHex2 = strHex.Right(1);
		m_edtHex1.SetWindowText(strHex1);
		m_edtHex2.SetWindowText(strHex2);
		nHex1 = strtol(strHex1,&p,16);
		nHex2 = strtol(strHex2,&p,16);
		strHex1.Format("%d",nHex1);
		strHex2.Format("%d",nHex2);
		strDec = "(" + strHex1 + " * 16 + " + strHex2 + ") = " + strDec;
		m_edtDec.SetWindowText(strDec);
	}
}

void CTeachCDlg::OnButtonA() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	int i;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " A";
	m_ctrlCalLine.SetWindowText(strCal);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(FALSE);
	
	if (m_setTime == 0)
	{
		m_ctrlNum.EnableWindow(FALSE);
		for (i = 0 ; i < ID_MAX - 2; i++)
		{
			pButton[i]->EnableWindow(TRUE);
		}
	} 
	m_setTime = 1;
	pButton[ID_NO]->EnableWindow(FALSE);
	pButton[ID_OPPSITE]->EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonB() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	int i;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " B";
	m_ctrlCalLine.SetWindowText(strCal);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(FALSE);
	pButton[ID_NO]->EnableWindow(FALSE);
	pButton[ID_OPPSITE]->EnableWindow(FALSE);
	
	if (m_setTime == 0)
	{
		m_ctrlNum.EnableWindow(FALSE);
		for (i = 0 ; i < ID_MAX - 2; i++)
		{
			pButton[i]->EnableWindow(TRUE);
		}
	} 
	m_setTime = 1;
}

void CTeachCDlg::OnButtonCal() 
{
	// TODO: Add your control notification handler code here
	CString strCal,strRes;
	if (m_setTime != 1)
	{
		AfxMessageBox("请输入变量!");
	}
	else
	{
		m_ctrlCalLine.GetWindowText(strCal);
		if (m_CalTime == 0)
		{
			strCal += ";";
		}
		m_ctrlCalLine.SetWindowText(strCal);
		strCal.Remove(' ');
		strCal.Delete(strCal.GetLength() - 1);
		AnalysisAndCal(strCal);
		m_CalTime ++;
	}
}

void CTeachCDlg::OnButtonClear() 
{
	// TODO: Add your control notification handler code here
	CString strCal = "C =";
	int i;
	m_ctrlCalLine.SetWindowText(strCal);
	m_setTime = 0;
	//m_NumTime = 0;
	m_CalTime = 0;
	for (i = 0; i < ID_MAX;i ++)
	{
		m_Cal.SetOper(i,FALSE);
	}
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	pButton[ID_NO]->EnableWindow(TRUE);
	pButton[ID_OPPSITE]->EnableWindow(TRUE);
	if (m_setTime == 0)
	{
		//m_setTime = 1;
		m_ctrlNum.EnableWindow(FALSE);
		for (i = 0 ; i < ID_MAX - 2; i++)
		{
			pButton[i]->EnableWindow(FALSE);
		}
	} 
}

void CTeachCDlg::OnButtonPlus() 
{
	// TODO: Add your control notification handler code here
	int i;
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " +";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_PLUS,TRUE);

	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonMinus() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " -";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_MINUS,TRUE);

	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonMul() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " *";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_MUL,TRUE);

	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonDiv() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " /";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_DIV,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonWith() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " &&";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_WITH,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonPerhaps() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " ||";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_PERHAPS,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonEqual() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " ==";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_EQUAL,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonNoequal() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " !=";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_NOEQUAL,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonAnd() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " &";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_AND,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonOr() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " |";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_OR,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonXor() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " ^";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_XOR,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonOppsite() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " !";
	m_setTime = 3;
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_OPPSITE,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonNo() 
{
	// TODO: Add your control notification handler code here
	CString strCal;
	m_ctrlCalLine.GetWindowText(strCal);
	strCal += " ~";
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_NO,TRUE);
	m_setTime = 3;
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(TRUE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(FALSE);
}

void CTeachCDlg::OnButtonLeft() 
{
	// TODO: Add your control notification handler code here
	CString strCal,strNum;
	m_ctrlCalLine.GetWindowText(strCal);
	strNum.Format("%d",m_nNum);
	strCal += " << " + strNum;
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_LEFT,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(FALSE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(TRUE);
}

void CTeachCDlg::OnButtonRight() 
{
	// TODO: Add your control notification handler code here
	CString strCal,strNum;
	m_ctrlCalLine.GetWindowText(strCal);
	strNum.Format("%d",m_nNum);
	strCal += " >> " + strNum;
	m_ctrlCalLine.SetWindowText(strCal);
	m_Cal.SetOper(ID_RIGHT,TRUE);
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(FALSE);
	int i;
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(TRUE);
}

void CTeachCDlg::OnSelendokComboNum() 
{
	// TODO: Add your control notification handler code here
	CString strCal,strTmp;
	int num,i;
	num = m_ctrlNum.GetCurSel();
	m_nNum = num;
	strTmp.Format("%d",num);
	m_ctrlCalLine.GetWindowText(strCal);
	
	if (m_CalTime == 0)
	{
		strCal.Delete(strCal.GetLength() - 1);
		strCal += strTmp;
		m_ctrlCalLine.SetWindowText(strCal);
	} 
	else
	{
		strCal = strCal.Mid(0,strCal.GetLength() - 2);
		strCal += strTmp;
		strCal += ";";
		m_ctrlCalLine.SetWindowText(strCal);
	}
	GetDlgItem(IDC_BUTTON_A)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON_B)->EnableWindow(FALSE);
	for (i = 0 ; i < ID_MAX;i++)
	{
		pButton[i]->EnableWindow(FALSE);
	}
	m_ctrlNum.EnableWindow(TRUE);
}

void CTeachCDlg::AnalysisAndCal(CString strCal)
{
	char * text = strCal.GetBuffer(0);
	CString strTmp;
	CStringArray strData;
	int cnt,i,oper;
	char chArr[2],ch,cres;
	UCHAR uch,uchArr[2],ures;
    // declare
    static CRegexpT <char> regexp("[:alpha:]");
	
    // loop
    MatchResult result = regexp.Match(text);
	
    while( result.IsMatched() )
    {
        strTmp.Format("%.*s", result.GetEnd() - result.GetStart(), text + result.GetStart());
		strData.Add(strTmp);
        // get next
        result = regexp.Match(text, result.GetEnd());
    }

	cnt = strData.GetSize();
	if (m_Cal.GetWhichOper(&oper))
	{
		if (cnt == 2)
		{
			if (m_bFlag)
			{
				if (oper == ID_LEFT || oper == ID_RIGHT)
				{
					if (strData.GetAt(1) == "A")
					{
						chArr[0] = m_ByteData[0].GetCData();
					} 
					else
					{
						chArr[0] = m_ByteData[1].GetCData();
					}
					chArr[1] = m_nNum;
					m_Cal.ProcBinDataC(oper,chArr,&cres);
				} 
				else
				{
					if (strData.GetAt(1) == "A")
					{
						ch = m_ByteData[0].GetCData();
					} 
					else
					{
						ch = m_ByteData[1].GetCData();
					}
					m_Cal.ProcUnaryDataC(oper,&ch,&cres);
				}
				m_ByteData[2].SetcData(cres);
				m_ByteData[2].SetBitFromDataC();
				ProcSingleLight(2);
			} 
			else
			{
				if (oper == ID_LEFT || oper == ID_RIGHT)
				{
					if (strData.GetAt(1) == "A")
					{
						uchArr[0] = m_ByteData[0].GetUcData();
					} 
					else
					{
						uchArr[0] = m_ByteData[1].GetUcData();
					}
					uchArr[1] = m_nNum;
					m_Cal.ProcBinDataU(oper,uchArr,&ures);
				} 
				else
				{
					if (strData.GetAt(1) == "A")
					{
						uch = m_ByteData[0].GetUcData();
					} 
					else
					{
						uch = m_ByteData[1].GetUcData();
					}
					m_Cal.ProcUnaryDataU(oper,&uch,&ures);
				}
				m_ByteData[2].SetUcData(ures);
				m_ByteData[2].SetBitFromDataU();
				ProcSingleLight(2);
			}
		}
		else if (cnt == 3)
		{
			if (m_bFlag)
			{
				if (strData.GetAt(1) == "A")
				{
					chArr[0] = m_ByteData[0].GetCData();
				} 
				else
				{
					chArr[0] = m_ByteData[1].GetCData();
				}
				if (oper != ID_LEFT || oper != ID_RIGHT)
				{
					if (strData.GetAt(2) == "A")
					{
						chArr[1] = m_ByteData[0].GetCData();
					} 
					else
					{
						chArr[1] = m_ByteData[1].GetCData();
					}
				}
				if (m_Cal.ProcBinDataC(oper,chArr,&cres))
				{
					m_ByteData[2].SetcData(cres);
					m_ByteData[2].SetBitFromDataC();
					ProcSingleLight(2);
				}
			} 
			else
			{
				if (strData.GetAt(1) == "A")
				{
					uchArr[0] = m_ByteData[0].GetUcData();
				} 
				else
				{
					uchArr[0] = m_ByteData[1].GetUcData();
				}
				if (oper != ID_LEFT || oper != ID_RIGHT)
				{
					if (strData.GetAt(2) == "A")
					{
						uchArr[1] = m_ByteData[0].GetUcData();
					} 
					else
					{
						uchArr[1] = m_ByteData[1].GetUcData();
					}
				}
				if (m_Cal.ProcBinDataU(oper,uchArr,&ures))
				{
					m_ByteData[2].SetUcData(ures);
					m_ByteData[2].SetBitFromDataU();
					ProcSingleLight(2);
				}
			}
		}
	}
	m_edtRes.SetWindowText(m_ByteData[2].GetStrDec());
	if (m_nRadioA == 2)
	{
		ProcMainLight();
	}
}

BOOL CTeachCDlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	m_ctrlTT.RelayEvent(pMsg);
	//屏蔽ESC关闭窗体/
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE) return TRUE;
	//屏蔽回车关闭窗体,但会导致回车在窗体上失效.
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN && pMsg->wParam) {
		OnButtonCal();
		return TRUE;
	}
	else
	return CDialog::PreTranslateMessage(pMsg);
}

void CTeachCDlg::InitMessage()
{
	EnableToolTips(TRUE);//enable use it
	m_ctrlTT.Create(this);
	m_ctrlTT.Activate(TRUE);
	m_ctrlTT.SetTipTextColor(RGB(0,0,0));//font color
	//鼠标指向多久后显示提示，毫秒
	m_ctrlTT.SetDelayTime(TTDT_INITIAL, 10); 
	
	//鼠标保持指向，提示显示多久，毫秒
	m_ctrlTT.SetDelayTime(TTDT_AUTOPOP, 30000); 
	
	//设定显示宽度，超长内容自动换行
	m_ctrlTT.SetMaxTipWidth(300);
	//IDC_TEST为你想添加提示的控件IDC，"hello为想添加的提示语句"
    m_ctrlTT.AddTool(GetDlgItem(IDC_STATIC_TRUE),(LPCTSTR)_T("原码就是符号位加上真值的绝对值, 即用第一位表示符号, 其余位表示值。"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_STATIC_NEG),(LPCTSTR)_T("正数的反码是其本身。负数的反码是在其原码的基础上, 符号位不变，其余各个位取反。"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_STATIC_COM),(LPCTSTR)_T("正数的补码就是其本身。负数的补码是在其原码的基础上, 符号位不变, 其余各位取反, 最后+1。 (即在反码的基础上+1)"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_CHECK_FLAG),(LPCTSTR)_T("char为有符号位,unsigned char为无符号位。符号位为字节中的最高位，即bit8"));

	m_ctrlTT.SetDelayTime(TTDT_AUTOPOP, 3000); 
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_PLUS),(LPCTSTR)_T("加"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_MINUS),(LPCTSTR)_T("减"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_MUL),(LPCTSTR)_T("乘"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_DIV),(LPCTSTR)_T("除"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_AND),(LPCTSTR)_T("按位与"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_OR),(LPCTSTR)_T("按位或"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_WITH),(LPCTSTR)_T("逻辑与"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_PERHAPS),(LPCTSTR)_T("逻辑或"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_NO),(LPCTSTR)_T("按位取反"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_OPPSITE),(LPCTSTR)_T("非"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_NOEQUAL),(LPCTSTR)_T("不等于"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_EQUAL),(LPCTSTR)_T("等于"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_XOR),(LPCTSTR)_T("异或"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_LEFT),(LPCTSTR)_T("左移"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_RIGHT),(LPCTSTR)_T("右移"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_A),(LPCTSTR)_T("变量A"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_B),(LPCTSTR)_T("变量B"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_CAL),(LPCTSTR)_T("计算"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_BUTTON_CLEAR),(LPCTSTR)_T("清除显示"));
	m_ctrlTT.AddTool(GetDlgItem(IDC_COMBO_NUM),(LPCTSTR)_T("移动位数"));
}
