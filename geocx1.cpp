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



// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "geocx1.h"

/////////////////////////////////////////////////////////////////////////////
// CGeocx1

IMPLEMENT_DYNCREATE(CGeocx1, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CGeocx1 properties

CString CGeocx1::GetDatumText()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void CGeocx1::SetDatumText(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString CGeocx1::GetLocationText()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void CGeocx1::SetLocationText(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

double CGeocx1::GetLatitude()
{
	double result;
	GetProperty(0x3, VT_R8, (void*)&result);
	return result;
}

void CGeocx1::SetLatitude(double propVal)
{
	SetProperty(0x3, VT_R8, propVal);
}

double CGeocx1::GetLongitude()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void CGeocx1::SetLongitude(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

short CGeocx1::GetAlignControls()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void CGeocx1::SetAlignControls(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

short CGeocx1::GetAlignDatum()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void CGeocx1::SetAlignDatum(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CGeocx1 operations

BOOL CGeocx1::OcxGetModify()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CGeocx1::SetGeocx(double dLatitude, double dLongitude)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 dLatitude, dLongitude);
}

BOOL CGeocx1::EnableWindow(BOOL bEnable)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bEnable);
	return result;
}

void CGeocx1::ShowRecentlyUsedLocations(BOOL bShowRecentlyUsedLocations)
{
   static BYTE parms[] = VTS_BOOL;
	InvokeHelper(0xA, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShowRecentlyUsedLocations);
}

void CGeocx1::AddRecentlyUsedLocation(LPCTSTR strRecentlyUsedLocation)
{
   static BYTE parms[] = VTS_BSTR;
	InvokeHelper(0xB, DISPATCH_METHOD, VT_EMPTY, NULL, parms, strRecentlyUsedLocation);
}

void CGeocx1::UseOtherDisplayFormat(BOOL bUseOtherDisplayFormat)
{
   static BYTE parms[] = VTS_BOOL;
	InvokeHelper(0xC, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bUseOtherDisplayFormat);
}