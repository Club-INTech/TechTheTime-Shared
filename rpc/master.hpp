#pragma once

#include <k2o/keyring.hpp>
#include <upd/format.hpp>

#include <order/hub.h>
#include <order/motion.h>

namespace rpc {
namespace master {

constexpr k2o::keyring keyring{
	k2o::flist<
		Motion_Set_Forward_Translation_Setpoint,
    Motion_Set_Backward_Translation_Setpoint,
    Motion_Set_Clockwise_Rotation_Setpoint,
    Motion_Set_Counterclockwise_Rotation_Setpoint,
    Motion_Set_Translation_PID,
    Motion_Set_Rotation_PID,
    Motion_Set_Left_PID,
    Motion_Set_Right_PID,
    Motion_Joystick,
		Motion_Release,
		Hub_Set_Mode
	>,
	upd::little_endian,
	upd::two_complement
};

} // namespace master
} // namespace rpc
