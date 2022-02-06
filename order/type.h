#pragma once

typedef int32_t Shared_Tick;
typedef double Shared_PID_K;
typedef uint32_t Shared_Timestamp;

typedef uint8_t Shared_Hub_Mode;
static const Shared_Hub_Mode SHARED_HUB_MODE_BASE = 0;
static const Shared_Hub_Mode SHARED_HUB_MODE_TRACKER = 1;
