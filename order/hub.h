#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef enum {
	SHARED_HUB_MODE_BASE,
	SHARED_HUB_MODE_TRACKER
} Shared_Hub_Mode;

void Hub_Set_Mode(Shared_Hub_Mode);

#ifdef __cplusplus
}
#endif // __cplusplus
