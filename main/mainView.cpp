// mainView.cpp : implementation of the CMainView class
//

#include "stdafx.h"
#include "main.h"

#include "mainDoc.h"
#include "mainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
//////////////////////////////////////////////////////////////////////////
//加上的库，判断文件是否存在
#include <iostream.h> 
#include <fstream.h> 
/////////////////////////////////////////////////////////////////////////////
// CMainView

IMPLEMENT_DYNCREATE(CMainView, CHtmlView)

BEGIN_MESSAGE_MAP(CMainView, CHtmlView)
	//{{AFX_MSG_MAP(CMainView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CHtmlView::OnFilePrint)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainView construction/destruction

CMainView::CMainView()
{
	// TODO: add construction code here

}

CMainView::~CMainView()
{
}

BOOL CMainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMainView drawing

void CMainView::OnDraw(CDC* pDC)
{
	CMainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CMainView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	// TODO: This code navigates to a popular spot on the web.
	//  change the code to go where you'd like.
	fstream _file; 
_file.open("ResOnly.dll",ios::in); 
if(!_file) {

}
else{
	Navigate2(_T("res://ResOnly.dll//Skin.htm"),NULL,NULL);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMainView printing


/////////////////////////////////////////////////////////////////////////////
// CMainView diagnostics

#ifdef _DEBUG
void CMainView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMainView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CMainDoc* CMainView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMainDoc)));
	return (CMainDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainView message handlers

void CMainView::OnBeforeNavigate2(LPCTSTR lpszURL, DWORD nFlags, LPCTSTR lpszTargetFrameName, CByteArray& baPostedData, LPCTSTR lpszHeaders, BOOL* pbCancel) 
{
	// TODO: Add your specialized code here and/or call the base class
CString url=lpszURL;
if (url.Right(4) == _T("exit"))
 {
     *pbCancel = TRUE;
     keybd_event( VK_MENU, 0, 0, 0 );
     keybd_event( VK_F4, 0, 0, 0 );
     keybd_event( VK_F4, 0, KEYEVENTF_KEYUP, 0 );
     keybd_event( VK_MENU, 0, KEYEVENTF_KEYUP, 0 );
 }
 else if(url.Right(7) == _T("execute"))
 {
     *pbCancel = TRUE;
     MessageBox("This button could execute some commands.");
 }	
	CHtmlView::OnBeforeNavigate2(lpszURL, nFlags,	lpszTargetFrameName, baPostedData, lpszHeaders, pbCancel);
}
