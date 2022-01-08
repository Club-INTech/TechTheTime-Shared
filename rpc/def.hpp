#pragma once

#include <cstddef>

namespace rpc {

uint8_t header[] = {0xff,0xff,0xff};

enum : uint8_t {
	REQUEST = 0,
	RESPONSE = 1
};

};
