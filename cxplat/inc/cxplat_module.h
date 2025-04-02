// Copyright (c) Microsoft Corporation
// SPDX-License-Identifier: MIT
#pragma once

#include <stdint.h>

CXPLAT_EXTERN_C_BEGIN

cxplat_status_t cxplat_get_module_path_from_address(
    _In_ const void* address,
    _Out_writes_z_(path_length) char* path,
    _In_ size_t path_length,
    _Out_opt_ size_t* path_length_out
);

CXPLAT_EXTERN_C_END
