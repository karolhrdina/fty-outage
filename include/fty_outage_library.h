/*  =========================================================================
    fty-outage - generated layer of public API

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_OUTAGE_LIBRARY_H_INCLUDED
#define FTY_OUTAGE_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <fty_proto.h>

//  FTY_OUTAGE version macros for compile-time API detection
#define FTY_OUTAGE_VERSION_MAJOR 1
#define FTY_OUTAGE_VERSION_MINOR 0
#define FTY_OUTAGE_VERSION_PATCH 0

#define FTY_OUTAGE_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_OUTAGE_VERSION \
    FTY_OUTAGE_MAKE_VERSION(FTY_OUTAGE_VERSION_MAJOR, FTY_OUTAGE_VERSION_MINOR, FTY_OUTAGE_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_OUTAGE_STATIC
#       define FTY_OUTAGE_EXPORT
#   elif defined FTY_OUTAGE_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_OUTAGE_EXPORT __declspec(dllexport)
#       else
#           define FTY_OUTAGE_EXPORT
#       endif
#   elif defined FTY_OUTAGE_EXPORTS
#       define FTY_OUTAGE_EXPORT __declspec(dllexport)
#   else
#       define FTY_OUTAGE_EXPORT __declspec(dllimport)
#   endif
#else
#   define FTY_OUTAGE_EXPORT
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_OUTAGE_BUILD_DRAFT_API
#define FTY_OUTAGE_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_OUTAGE_BUILD_DRAFT_API
typedef struct _fty_outage_server_t fty_outage_server_t;
#define FTY_OUTAGE_SERVER_T_DEFINED
#endif // FTY_OUTAGE_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef FTY_OUTAGE_BUILD_DRAFT_API
#include "fty_outage_server.h"
#endif // FTY_OUTAGE_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
