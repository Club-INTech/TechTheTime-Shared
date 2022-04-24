#pragma once

#include <k2o/keyring.hpp>

#include <order/misc.h>

namespace rpc {
namespace slave_2a {

constexpr k2o::keyring keyring {
	k2o::flist<Misc_Set_Pump, Misc_Set_Valve, Misc_Set_Servo>,
	upd::little_endian,
	upd::two_complement
};

} // namespace slave_2a
} // namespace rpc
