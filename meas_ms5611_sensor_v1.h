#ifndef __MEAS_MS5611_SENSOR_V1_H__
#define __MEAS_MS5611_SENSOR_V1_H__
#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

#include "ms5611.h"

int rt_hw_ms5611_init(const char *name, struct rt_sensor_config *cfg);

#endif