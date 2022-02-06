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
		Motion_Release,
		Hub_Set_Mode
	>,
	upd::little_endian,
	upd::two_complement
};

} // namespace master
} // namespace rpc
