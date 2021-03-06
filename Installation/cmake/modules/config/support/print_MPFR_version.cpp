// Copyright (c) 2005  
// Utrecht University (The Netherlands),
// ETH Zurich (Switzerland),
// INRIA Sophia-Antipolis (France),
// Max-Planck-Institute Saarbruecken (Germany),
// and Tel-Aviv University (Israel).  All rights reserved. 
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 3 of the License,
// or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
// SPDX-License-Identifier: LGPL-3.0+
//
// Author(s)     : various

// Tests if MPFR is available.

#include <iostream>
#include <cstdio>
#include <cstddef>
#include "mpfr.h"

int main()
{
#ifdef MPFR_VERSION
    std::cout << "version=" << MPFR_VERSION_MAJOR << "."
                            << MPFR_VERSION_MINOR << "."
                            << MPFR_VERSION_PATCHLEVEL << std::endl;
#else
    // MPFR versions < 2.2.0 did not have version strings
    std::cout << "version=unknown" << std::endl;
#endif

    return 0;
}
