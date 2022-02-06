#pragma once

#include "type.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void Controller_Report_Measure(Shared_Timestamp, Shared_Tick, Shared_Tick);

#ifdef __cplusplus
} //extern "C"
#endif // __cplusplus
