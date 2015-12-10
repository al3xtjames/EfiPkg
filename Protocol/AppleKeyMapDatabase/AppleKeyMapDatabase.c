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
/// @file      Protocol/AppleKeyMapDatabase/AppleKeyMapDatabase.c
///
///
///
/// @author    Download-Fritz
/// @date      15/03/2015: Initial version
/// @copyright Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
///

#include <AppleEfi.h>

#include <IndustryStandard/AppleHid.h>

#include <Protocol/AppleKeyMapDatabase.h>

// gAppleKeyMapDatabaseProtocolGuid
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleKeyMapDatabaseProtocolGuid = APPLE_KEY_MAP_DATABASE_PROTOCOL_GUID;

EFI_GUID_STRING (&gAppleKeyMapDatabaseProtocolGuid, "Key Map Database", "Apple Key Map Database Protocol");

