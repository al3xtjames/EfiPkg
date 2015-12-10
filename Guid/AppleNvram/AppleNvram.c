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
/// @file      Guid/AppleNvram/AppleNvram.c
///
///            
///
/// @author    Download-Fritz
/// @date      23/02/2015: Initial version
/// @copyright Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
///

#include <AppleEfi.h>

#include <Guid/AppleNvram.h>

// gAppleVendorNvramGuid
/// A global variable storing the GUID of the APPLE_VENDOR_NVRAM EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleVendorNvramGuid = APPLE_VENDOR_NVRAM_GUID;

// gAppleBootGuid
/// A global variable storing the GUID of the APPLE_BOOT EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleBootGuid = APPLE_BOOT_GUID;

// gAppleCoreStorageGuid
/// A global variable storing the GUID of the APPLE_CORE_STORAGE EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleCoreStorageGuid = APPLE_CORE_STORAGE_NVRAM_GUID;

// gAppleEfiNvramTrbStagingCommandGuid
/// A global variable storing the GUID of the APPLE_EFI_NVRAM_TRB_SECURE EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleEfiNvramTrbStagingCommandGuid = APPLE_EFI_NVRAM_TRB_STAGING_COMMAND_GUID;

// AppleWirelessNetworkNvramGuid
/// A global variable storing the GUID of the APPLE_WIRELESS_NETWORK EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleWirelessNetworkNvramGuid = APPLE_WIRELESS_NETWORK_NVRAM_GUID;

// AppleEfiAppearanceNvramGuid
/// A global variable storing the GUID of the APPLE_EFI_APPEARANCE EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleEfiAppearanceNvramGuid = APPLE_EFI_APPEARANCE_NVRAM_GUID;

// gAppleEfiNvramResetGuid
/// A global variable storing the GUID of the APPLE_EFI_NVRAM_TRB_SECURE EFI variable scope.
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleEfiNvramTrbSecureVariableGuid = APPLE_EFI_NVRAM_TRB_SECURE_VARIABLE_GUID;
