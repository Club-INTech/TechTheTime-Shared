#pragma once

#include <stddef.h>

#include "type.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void Motion_Set_Forward_Translation_Setpoint(Shared_Tick);
void Motion_Set_Backward_Translation_Setpoint(Shared_Tick);
void Motion_Set_Clockwise_Rotation_Setpoint(Shared_Tick);
void Motion_Set_Counterclockwise_Rotation_Setpoint(Shared_Tick);
void Motion_Set_Translation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Rotation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Left_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Right_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Release();

#ifdef __cplusplus
} //extern "C"
#endif // __cplusplus
