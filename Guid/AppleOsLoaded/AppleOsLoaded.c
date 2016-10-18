/** @file
  Copyright (C) 2005 - 2016, Apple Inc.  All rights reserved.
  Portions Copyright (C) 2014 - 2016, CupertinoNet.  All rights reserved.<BR>

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
**/

#include <AppleEfi.h>

#include APPLE_GUID_DEFINITION (AppleOSLoaded)

// gAppleOSLoadedNamedEventGuid
GLOBAL_REMOVE_IF_UNREFERENCED
EFI_GUID gAppleOSLoadedNamedEventGuid = APPLE_OS_LOADED_NAMED_EVENT_GUID;

EFI_GUID_STRING (
  &gAppleOSLoadedNamedEventGuid,
  "Apple OS Loaded",
  "Apple OS Loaded Event Name"
  );
