// Copyright (c) 1994-2013 Georgia Tech Research Corporation, Atlanta, GA
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



#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
#endif

#include <SDKDDKVer.h>

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions


#include <afxdisp.h>        // MFC Automation classes

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC support for Internet Explorer 4 Common Controls
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC support for ribbons and control bars
#include <afxdao.h>

// ATL
#include <atlcom.h>
#include <comdef.h>

// STL
#include <vector>
#include <map>
#include <set>
#include <algorithm>

// Imports
#import <msxml6.dll> exclude("ISequentialStream", "_FILETIME")
#import "MapDataServer.tlb" no_namespace named_guids exclude("MapScaleUnitsEnum") exclude("IErrorInfo")
#import "MapRenderingEngine.tlb" no_namespace named_guids
#import "FalconViewOverlay.tlb" named_guids
#import "FalconViewTabularEditor.tlb" named_guids
#import "FvConfigFileServer.tlb" no_namespace, named_guids, exclude("ProjectionEnum"), exclude("MapScaleUnitsEnum")
#import "FvSystemHealth.tlb" no_namespace named_guids
#import "FvCommonDialogs.tlb" no_namespace, named_guids
#import "FVDataSources.tlb" named_guids // must come before GeodataDataSources.tlb
namespace FvDataSourcesLib
{
#import "Geodatadatasources.tlb" no_namespace, named_guids
}
#import "fvw.tlb" named_guids
#import "PrintToolOverlay.tlb" named_guids
#import "SkyView.tlb" no_namespace named_guids
#import "FvSkyViewOverlayServer.tlb" no_namespace, named_guids, exclude("ISkyView", "IID_ISkyView")
#if GOV_RELEASE
#import "xplan_package_service.tlb" named_guids
#endif
#import "SampledMotionPlayback.tlb" no_namespace, named_guids, exclude("IMotionPlayback")
#import "FvToolbarServer.tlb" no_namespace, named_guids

#pragma warning (push)
#pragma warning (disable:4146)
#import "msado60_backcompat_i386.tlb" \
            rename("EOF","adoEOF"), \
            rename("LockTypeEnum", "adoLockTypeEnum"), \
            rename("Parameter", "adoParameter"), \
            rename("Field", "adoField"), \
            rename("Fields", "adoFields"), \
            no_namespace, \
            exclude("DataTypeEnum", "FieldAttributeEnum", "EditModeEnum", "RecordStatusEnum", "ParameterDirectionEnum")
#pragma warning (pop)