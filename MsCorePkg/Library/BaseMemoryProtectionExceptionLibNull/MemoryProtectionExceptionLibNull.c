/**@file

TODO: Write Description

Copyright (c) Microsoft Corporation.
SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Library/MemoryProtectionExceptionLib.h>

/**
  Gets a memory protection setting from the platform-specific early store. This setting value is only intended
  to exist in early store if an exception was hit potentially related to memory protections.

  @param[in]     VarToken   MEMORY_PROTECTION_VAR_TOKEN representing variable.
  @param[in,out] Setting    UINT32 populated with bitmask for current memory protection setting.

  @retval EFI_SUCCESS             Setting now contains bitmask for String memory setting.
  @retval EFI_NOT_FOUND           Memory protections variable region in CMOS is invalid.
  @retval EFI_INVALID_PARAMETER   Setting was NULL

**/
EFI_STATUS
EFIAPI
MemoryProtectionExceptionOverrideCheck (
  IN    MEMORY_PROTECTION_VAR_TOKEN      VarToken,
  OUT   UINT32                          *Setting
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Clears the memory protection setting from the platform-specific early store.

  @retval EFI_SUCCESS       Always return success

**/
VOID
EFIAPI
ClearMemoryProtectionExceptionOverride (
  VOID
  )
{
  return;
}
