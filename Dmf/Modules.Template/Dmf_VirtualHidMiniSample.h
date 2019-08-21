/*++

    Copyright (c) Microsoft Corporation. All rights reserved.
    Licensed under the MIT license.

Module Name:

    Dmf_VirtualHidMIniSample.h

Abstract:

    Companion file to Dmf_VirtualHidMIniSample.c.

Environment:

    Kernel-mode Driver Framework
    User-mode Driver Framework

--*/

#pragma once

// Client uses this structure to configure the Module specific parameters.
//
typedef struct
{
    ULONG ReadFromRegistry;
} DMF_CONFIG_VirtualHidMIniSample;

// This macro declares the following functions:
// DMF_VirtualHidMIniSample_ATTRIBUTES_INIT()
// DMF_CONFIG_VirtualHidMIniSample_AND_ATTRIBUTES_INIT()
// DMF_VirtualHidMIniSample_Create()
//
DECLARE_DMF_MODULE(VirtualHidMIniSample)

// Module Methods
//

// eof: Dmf_VirtualHidMIniSample.h
//
