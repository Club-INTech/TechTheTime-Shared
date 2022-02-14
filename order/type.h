#pragma once

typedef int32_t Shared_Tick;
typedef uint64_t Shared_PID_K;
typedef uint32_t Shared_Timestamp;

typedef uint8_t Shared_Hub_Mode;
static const Shared_Hub_Mode SHARED_HUB_MODE_BASE = 0;
static const Shared_Hub_Mode SHARED_HUB_MODE_TRACKER = 1;

#define TO_SHARED_PID_K_FIXED_POINT(X) ((X) * (1ull << (sizeof (Shared_PID_K) * 4)))
#define FROM_SHARED_PID_K_FIXED_POINT(X) ((double) (X) / (1ull << (sizeof (Shared_PID_K) * 4)))
