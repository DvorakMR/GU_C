//==============================================================================
//
// Title:		dyn_str.h
// Purpose:		Dynamically Allocate string growing by factor 2.
//
// Created on:	2022-10-11 at 12:13:35 by Andreas Åberg.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __dyn_str_H__
#define __dyn_str_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include <utility.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// External variables

//==============================================================================
// Global functions

char *dyn_str();

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __dyn_strh_H__ */
