#pragma once

#include <cstddef>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef uint16_t Shared_Tick;
typedef double Shared_PID_K;

void Motion_Set_Forward_Translation_Setpoint(Shared_Tick);
void Motion_Set_Backward_Translation_Setpoint(Shared_Tick);
void Motion_Set_Clockwise_Rotation_Setpoint(Shared_Tick);
void Motion_Set_Counterclockwise_Rotation_Setpoint(Shared_Tick);
void Motion_Set_Translation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Rotation_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Left_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);
void Motion_Set_Right_PID(Shared_PID_K, Shared_PID_K, Shared_PID_K);

#ifdef __cplusplus
} //extern "C"
#endif // __cplusplus
