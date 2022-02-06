#pragma once

#include <cstddef>

namespace rpc {

inline uint8_t header[] = {0xff, 0xff, 0xff};

enum class Frame_Type: uint8_t {
	REQUEST,
	RESPONSE
};

};
