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
#include "field.h"

// Dispatch interfaces referenced by this interface
#include "Properties.h"


/////////////////////////////////////////////////////////////////////////////
// CField properties

/////////////////////////////////////////////////////////////////////////////
// CField operations

CProperties CField::GetProperties()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1f4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CProperties(pDispatch);
}

long CField::GetActualSize()
{
	long result;
	InvokeHelper(0x455, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CField::GetAttributes()
{
	long result;
	InvokeHelper(0x45a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CField::GetDefinedSize()
{
	long result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CField::GetName()
{
	CString result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CField::GetType()
{
	long result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT CField::GetValue()
{
	VARIANT result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CField::SetValue(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void CField::AppendChunk(const VARIANT& Data)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x453, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Data);
}

VARIANT CField::GetChunk(long Length)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x454, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Length);
	return result;
}

VARIANT CField::GetOriginalValue()
{
	VARIANT result;
	InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CField::GetUnderlyingValue()
{
	VARIANT result;
	InvokeHelper(0x451, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPUNKNOWN CField::GetDataFormat()
{
	LPUNKNOWN result;
	InvokeHelper(0x45b, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CField::SetRefDataFormat(LPUNKNOWN newValue)
{
	static BYTE parms[] =
		VTS_UNKNOWN;
	InvokeHelper(0x45b, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

void CField::SetType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CField::SetDefinedSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CField::SetAttributes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x45a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CField::GetStatus()
{
	long result;
	InvokeHelper(0x45c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}
