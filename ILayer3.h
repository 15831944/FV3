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

// ILayer3.h
//

class Layer3 : public CCmdTarget
{
	DECLARE_DYNCREATE(Layer3)
   DECLARE_OLECREATE(Layer3)

	Layer3();           // protected constructor used by dynamic creation

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Layer3)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~Layer3();

	DECLARE_MESSAGE_MAP()
	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(Layer3)
   afx_msg long GetLayerEditors(VARIANT FAR* pLayerEditors);
   afx_msg long GetLayerEditor(long layer_handle, VARIANT FAR* layer_editor_variant);
   afx_msg long ShowPlaybackToolbar(BOOL show);
   afx_msg long ShowFileOverlayListToolbar(BOOL show);
   afx_msg long AddPredefinedSymbol(long layer_handle, double lat, double lon,
      long symbolType, double scale_factor, double rotation);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};