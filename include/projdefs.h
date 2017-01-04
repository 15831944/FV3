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



#pragma once

#ifndef PROJDEFS_H
#define PROJDEFS_H 1

#include "maps_d.h"
//typedef GUID projection_t;

/*
#include "maps_d.h"

class ProjectionID : public UUID_and_string {
public:
   // Constructor
   // Use deserialize() or the assignment operator to set objects created with
   // the default contructor.
   ProjectionID();

   // The given string is the user interface name for this source.  It will be
   // returned by get_string().
   ProjectionID(const char *string, UUID uuid);

   // Copy constructor
   ProjectionID(const ProjectionID &source);

   // Destructor
   ~ProjectionID() {}

   // Assignment
   const ProjectionID& operator =(const ProjectionID &source);

   // Comparison
   friend BOOL operator ==(const ProjectionID &s1, const ProjectionID &s2);
   friend BOOL operator !=(const ProjectionID &s1, const ProjectionID &s2);

}; // end ProjectionID

typedef ProjectionID projection_t;
*/

#endif