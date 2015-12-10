//
// Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
//
// This program and the accompanying materials have not been licensed.
// Neither is its usage, its redistribution, in source or binary form,
// licensed, nor implicitely or explicitely permitted, except when
// required by applicable law.
//
// Unless required by applicable law or agreed to in writing, software
// distributed is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
// OR CONDITIONS OF ANY KIND, either express or implied.
//

///
/// @file      Protocol/KeyboardInformation/KeyboardInformation.c
///
///            
///
/// @author    Download-Fritz
/// @date      
/// @copyright Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
///

#include <AppleEfi.h>

#include <Protocol/KeyboardInformation.h>

// gEfiKeyboardInformationProtocolGuid
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiKeyboardInformationProtocolGuid = EFI_KEYBOARD_INFORMATION_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiKeyboardInformationProtocolGuid, "Keyboard Information", "Keyboard Information Protocol");
