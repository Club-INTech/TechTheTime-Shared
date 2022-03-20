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
void Motion_Start_Joystick(void);
void Motion_Set_Joystick(Shared_Tick, Shared_Tick);
void Motion_Set_Translation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Rotation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Left_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Right_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Free_Movement(Shared_PWM);
void Motion_Release(void);
Shared_Tick Get_Left_Ticks(void);
Shared_Tick Get_Right_Ticks(void);

#ifdef __cplusplus
} //extern "C"
#endif // __cplusplus
