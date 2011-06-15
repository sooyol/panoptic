//  Copyright (C) 2005 Robert Kooima
//
//  THUMB is free software; you can redistribute it and/or modify it under
//  the terms of  the GNU General Public License as  published by the Free
//  Software  Foundation;  either version 2  of the  License,  or (at your
//  option) any later version.
//
//  This program  is distributed in the  hope that it will  be useful, but
//  WITHOUT   ANY  WARRANTY;   without  even   the  implied   warranty  of
//  MERCHANTABILITY  or FITNESS  FOR A  PARTICULAR PURPOSE.   See  the GNU
//  General Public License for more details.

#include <SDL.h>

#include <stdexcept>
#include <cstdio>

#include <app-prog.hpp>
#include <app-default.hpp>

#include "panoview.hpp"

//-----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    try
    {
        app::prog *P;

        P = new panoview(std::string(argc > 1 ? argv[1] : DEFAULT_TAG));
        P->run();

        delete P;
    }
    catch (std::exception& e)
    {
        fprintf(stderr, "Exception: %s\n", e.what());
    }
    return 0;
}

//-----------------------------------------------------------------------------
