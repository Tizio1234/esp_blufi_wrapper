#pragma once

#include <esp_err.h>
#include <esp_blufi_api.h>

esp_err_t blufi_wrap_init(esp_blufi_callbacks_t* callbacks);
void initialise_wifi(void);

