#pragma once

#include <k2o/keyring.hpp>
#include <upd/format.hpp>

#include <order/hub.h>
#include <order/motion.h>
#include <order/dxl.h>
#include <order/actuator.h>
#include <order/misc.h>
#include <order/Resistance.h>
namespace rpc {
namespace master {

constexpr k2o::keyring keyring { k2o::flist<
		Motion_Set_Forward_Translation_Setpoint,
		Motion_Set_Backward_Translation_Setpoint,
		Motion_Set_Clockwise_Rotation_Setpoint,
		Motion_Set_Counterclockwise_Rotation_Setpoint, Motion_Start_Joystick,
		Motion_Set_Joystick, Motion_Set_Translation_PID,
		Motion_Set_Rotation_PID, Motion_Set_Left_PID, Motion_Set_Right_PID,
		Motion_Release, Motion_Set_Free_Movement, DXL_Position,
		DXL_Position_Angle, Hub_Set_Mode, Get_Ticks, Get_Left_Ticks,
		Get_Right_Ticks, isJumperOn, Misc_Set_Pump, Misc_Set_Valve,
		Misc_Set_Servo, giveRes >, upd::little_endian, upd::two_complement};

} // namespace master
} // namespace rpc
