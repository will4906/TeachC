// TeachC.h : main header file for the TEACHC application
//

#if !defined(AFX_TEACHC_H__3BFA9159_01BB_4EAA_86B1_3766CE715430__INCLUDED_)
#define AFX_TEACHC_H__3BFA9159_01BB_4EAA_86B1_3766CE715430__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTeachCApp:
// See TeachC.cpp for the implementation of this class
//

class CTeachCApp : public CWinApp
{
public:
	CTeachCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeachCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTeachCApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEACHC_H__3BFA9159_01BB_4EAA_86B1_3766CE715430__INCLUDED_)
