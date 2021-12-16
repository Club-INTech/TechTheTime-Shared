#pragma once

#include <k2o/keyring.hpp>
#include <upd/format.hpp>

#include <order/controller.h>

namespace rpc {
namespace controller {

constexpr k2o::keyring keyring{k2o::flist<controller_report_measures>, upd::little_endian, upd::two_complement};

} // namespace controller
} // namespace rpc
