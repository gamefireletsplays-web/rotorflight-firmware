#include <platform.h>
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/sensor.h"
const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM8, CH4,  PC9,  (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 0), // S1
    DEF_TIM(TIM8, CH3,  PC8,  (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 0), // S2
    DEF_TIM(TIM1, CH3N, PB15, (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 0), // S3
    DEF_TIM(TIM1, CH1,  PA8,  (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 1), // S4
    DEF_TIM(TIM2, CH4,  PB11, (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 0), // S5
    DEF_TIM(TIM2, CH3,  PB10, (TIM_USE_MOTOR | TIM_USE_SERVO), 0, 0), // S6
    DEF_TIM(TIM3, CH4,  PB1,  TIM_USE_LED, 0, 0), // S12 / LED
    DEF_TIM(TIM5, CH3,  PA2,  TIM_USE_ANY,         0, 0), // SoftSerial1 TX
};

