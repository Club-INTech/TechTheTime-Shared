#pragma once

#include <cstddef>

namespace rpc {

inline uint8_t header[] = {0xff,0xff,0xff};

enum : uint8_t {
	REQUEST = 0,
	RESPONSE = 1
};

};
