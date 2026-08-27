///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// ShaderBinaryIncludes.cpp                                                  //
// Copyright (C) Microsoft Corporation. All rights reserved.                 //
// This file is distributed under the University of Illinois Open Source     //
// License. See LICENSE.TXT for details.                                     //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#pragma once
// clang-format off
// Includes on Windows are highly order dependent.
#ifdef _WIN32
#include "windows.h"

#include <assert.h>
#include <float.h>
#include <strsafe.h>
#include <intsafe.h>
#include <dxgiformat.h>
#include <d3d12.h>
#else
#include "dxc/Support/WinFunctions.h"
#include <assert.h>
#endif
#define D3DX12_NO_STATE_OBJECT_HELPERS
#include "dxc/Support/d3d12TokenizedProgramFormat.hpp"
#include "ShaderBinary/ShaderBinary.h"
// clang-format on

#define ASSUME(_exp)                                                           \
  {                                                                            \
    assert(_exp);                                                              \
    __assume(_exp);                                                            \
  }
