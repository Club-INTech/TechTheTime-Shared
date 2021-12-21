#pragma once

#include <k2o/keyring.hpp>
#include <upd/format.hpp>

#include <order/motion.h>

namespace rpc {
namespace master {

constexpr k2o::keyring keyring{k2o::flist<motion_set_translation_setpoint>, upd::little_endian, upd::two_complement};

} // namespace master
} // namespace rpc
