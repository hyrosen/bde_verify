// csatr_componentheaderinclude.v.cpp                                 -*-C++-*-
// ----------------------------------------------------------------------------
// Copyright 2012 Dietmar Kuehl http://www.dietmar-kuehl.de              
// Distributed under the Boost Software License, Version 1.0. (See file  
// LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt).     
// ----------------------------------------------------------------------------

#include <bdes_ident.h>
BDES_IDENT_RCSID(csatr_componentheaderinclude_v_cpp, "$Id$ $CSID$")

namespace bde_verify
{
    namespace csatr
    {
        static int local(0);
    }
}

#include "csatr_componentheaderinclude.v.hpp"

int bde_verify::csatr::componentheaderinclude::something(17);

int main()
{
    return bde_verify::csatr::local;
}