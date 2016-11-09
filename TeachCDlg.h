// TeachCDlg.h : header file
//

#if !defined(AFX_TEACHCDLG_H__8661FF23_17A8_4193_9C17_AEE6EB6E7C11__INCLUDED_)
#define AFX_TEACHCDLG_H__8661FF23_17A8_4193_9C17_AEE6EB6E7C11__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "ByteData.h"
#include "Calculator.h"
/////////////////////////////////////////////////////////////////////////////
// CTeachCDlg dialog
#define DATA_NUM 3

class CTeachCDlg : public CDialog
{
// Construction
public:
	CTeachCDlg(CWnd* pParent = NULL);	// standard constructor
	CByteData m_ByteData[DATA_NUM];
	CCalculator m_Cal;
	CToolTipCtrl m_ctrlTT;

public:
	void InitMessage();
	void AnalysisAndCal(CString strCal);
	int m_CalTime;
	int m_nNum;
	int m_setTime;
	void SetMainData(int n);
	CStatic *pHex[DATA_NUM];
	void SetMainBit();
	void ProcSingleLight(int n);
	void ProcMainLight();
	BOOL m_bFlag;
	void ProcLight();
	CStatic *pPicSta[DATA_NUM][BYTE_LEN];
	CStatic *pMainSta[BYTE_LEN];
	CEdit   *pMainEdit[3][BYTE_LEN];
	CButton	*pButton[ID_MAX];
	HBITMAP hLight;
	HBITMAP hUnlight;
	HINSTANCE hInstance;
	BOOL bMainLight[BYTE_LEN];

// Dialog Data
	//{{AFX_DATA(CTeachCDlg)
	enum { IDD = IDD_TEACHC_DIALOG };
	CEdit	m_edtRes;
	CEdit	m_ctrlCalLine;
	CButton	m_ctrlNO;
	CComboBox	m_ctrlNum;
	CButton	m_ctrlXor;
	CButton	m_ctrlWith;
	CButton	m_ctrlRight;
	CButton	m_ctrlPlus;
	CButton	m_ctrlPerhaps;
	CButton	m_ctrlOr;
	CButton	m_ctrlOppsite;
	CButton	m_ctrlNoEqual;
	CButton	m_ctrlMul;
	CButton	m_ctrlMinus;
	CButton	m_ctrlLeft;
	CButton	m_ctrlEqual;
	CButton	m_ctrlDiv;
	CButton	m_ctrlB;
	CButton	m_ctrlAnd;
	CButton	m_ctrlA;
	CStatic	m_ctrlMBit8;
	CStatic	m_ctrlMBit7;
	CStatic	m_ctrlMBit6;
	CStatic	m_ctrlMBit5;
	CStatic	m_ctrlMBit4;
	CStatic	m_ctrlMBit3;
	CStatic	m_ctrlMBit2;
	CStatic	m_ctrlMBit1;
	CStatic	m_ctrlHexC;
	CStatic	m_ctrlHexB;
	CStatic	m_ctrlHexA;
	CStatic	m_ctrlCBit8;
	CStatic	m_ctrlCBit7;
	CStatic	m_ctrlCBit6;
	CStatic	m_ctrlCBit5;
	CStatic	m_ctrlCBit4;
	CStatic	m_ctrlCBit3;
	CStatic	m_ctrlCBit2;
	CStatic	m_ctrlCBit1;
	CStatic	m_ctrlBBit8;
	CStatic	m_ctrlBBit7;
	CStatic	m_ctrlBBit6;
	CStatic	m_ctrlBBit5;
	CStatic	m_ctrlBBit4;
	CStatic	m_ctrlBBit3;
	CStatic	m_ctrlBBit2;
	CStatic	m_ctrlBBit1;
	CStatic	m_ctrlABit8;
	CStatic	m_ctrlABit7;
	CStatic	m_ctrlABit6;
	CStatic	m_ctrlABit5;
	CStatic	m_ctrlABit4;
	CStatic	m_ctrlABit3;
	CStatic	m_ctrlABit2;
	CStatic	m_ctrlABit1;
	CEdit	m_edtTrue8;
	CEdit	m_edtTrue7;
	CEdit	m_edtTrue6;
	CEdit	m_edtTrue5;
	CEdit	m_edtTrue4;
	CEdit	m_edtTrue3;
	CEdit	m_edtTrue2;
	CEdit	m_edtTrue1;
	CEdit	m_edtNeg8;
	CEdit	m_edtNeg7;
	CEdit	m_edtNeg6;
	CEdit	m_edtNeg5;
	CEdit	m_edtNeg4;
	CEdit	m_edtNeg3;
	CEdit	m_edtNeg2;
	CEdit	m_edtNeg1;
	CEdit	m_edtHex2;
	CEdit	m_edtHex1;
	CEdit	m_edtHexFlag;
	CEdit	m_edtDecFlag;
	CEdit	m_edtDec;
	CEdit	m_edtCom8;
	CEdit	m_edtCom7;
	CEdit	m_edtCom6;
	CEdit	m_edtCom5;
	CEdit	m_edtCom4;
	CEdit	m_edtCom3;
	CEdit	m_edtCom2;
	CEdit	m_edtCom1;
	CButton	m_ctrlFlag;
	int		m_nRadioA;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeachCDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTeachCDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnRadioA();
	afx_msg void OnRadioB();
	afx_msg void OnRadioC();
	afx_msg void OnStaticMainBit8();
	afx_msg void OnStaticMainBit7();
	afx_msg void OnStaticMainBit6();
	afx_msg void OnStaticMainBit5();
	afx_msg void OnStaticMainBit4();
	afx_msg void OnStaticMainBit3();
	afx_msg void OnStaticMainBit2();
	afx_msg void OnStaticMainBit1();
	afx_msg void OnCheckFlag();
	afx_msg void OnButtonA();
	afx_msg void OnButtonB();
	afx_msg void OnButtonCal();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonPlus();
	afx_msg void OnButtonMinus();
	afx_msg void OnButtonMul();
	afx_msg void OnButtonDiv();
	afx_msg void OnButtonWith();
	afx_msg void OnButtonPerhaps();
	afx_msg void OnButtonEqual();
	afx_msg void OnButtonNoequal();
	afx_msg void OnButtonAnd();
	afx_msg void OnButtonOr();
	afx_msg void OnButtonXor();
	afx_msg void OnButtonOppsite();
	afx_msg void OnButtonNo();
	afx_msg void OnButtonLeft();
	afx_msg void OnButtonRight();
	afx_msg void OnSelendokComboNum();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHCDLG_H__8661FF23_17A8_4193_9C17_AEE6EB6E7C11__INCLUDED_)
