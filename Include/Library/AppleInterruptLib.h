/** @file
  Copyright (c) 2005 - 2017, Apple Inc.  All rights reserved.
  Portions Copyright (C) 2017, CupertinoNet.  All rights reserved.<BR>

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

#ifndef APPLE_INTERRUPT_H_
#define APPLE_INTERRUPT_H_

#define APPLE_INTERRUPT_ASSERT  1

// AppleInterrupt
RETURN_STATUS
EFIAPI
AppleInterrupt (
  IN UINT32  FunctiondId,
  ...
  );

#endif // APPLE_INTERRUPT_H_