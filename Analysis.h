// Copyright (c) 1994-2009 Georgia Tech Research Corporation, Atlanta, GA
// This file is part of FalconView(tm).

// FalconView(tm) is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// FalconView(tm) is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public License
// along with FalconView(tm).  If not, see <http://www.gnu.org/licenses/>.

// FalconView(tm) is a trademark of Georgia Tech Research Corporation.

#if !defined(AFX_ANALYSIS_H__741282F1_255B_4462_8707_DE5B4A5D3D65__INCLUDED_)
#define AFX_ANALYSIS_H__741282F1_255B_4462_8707_DE5B4A5D3D65__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Analysis.h : header file
//

class CMaskingServer;
class CLineOfSightSweep;

/////////////////////////////////////////////////////////////////////////////
// Analysis command target

class Analysis : public CCmdTarget
{
	DECLARE_DYNCREATE(Analysis)

	Analysis();           // protected constructor used by dynamic creation

// Attributes
public:

	CList<CLineOfSightSweep *, CLineOfSightSweep *> m_pSweepList;

	// dispatch pointer to the client's callback object
   IDispatch *m_pDispatch;
  
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Analysis)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~Analysis();

	// Generated message map functions
	//{{AFX_MSG(Analysis)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(Analysis)

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(Analysis)
	afx_msg long CreateMask(LPCSTR name, 
									double lat, 
									double lon, 
									double antenna_height, 
									double dted_spacing, 
									double sweep_spacing, 
									double range,
									BOOL bInvertMask);
	afx_msg long RegisterWithMaskServer(const VARIANT FAR& dispatch_pointer);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANALYSIS_H__741282F1_255B_4462_8707_DE5B4A5D3D65__INCLUDED_)
