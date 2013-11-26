// ResOnly.h : main header file for the RESONLY DLL
//

#if !defined(AFX_RESONLY_H__A93ED2A6_52EE_4DCE_A2B6_1E9CCC50D662__INCLUDED_)
#define AFX_RESONLY_H__A93ED2A6_52EE_4DCE_A2B6_1E9CCC50D662__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CResOnlyApp
// See ResOnly.cpp for the implementation of this class
//

class CResOnlyApp : public CWinApp
{
public:
	CResOnlyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CResOnlyApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CResOnlyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RESONLY_H__A93ED2A6_52EE_4DCE_A2B6_1E9CCC50D662__INCLUDED_)
