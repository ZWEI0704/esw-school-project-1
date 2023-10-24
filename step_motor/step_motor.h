/*
 * step_motor.h
 * step_motor_control
 * write by siyun
 */

#include <unistd.h>
#include <wiringPi.h>
#include <stdint.h>

#define IN1 23
#define IN2 24
#define IN3 25
#define IN4 8
static uint32_t motorDelay;

// motor setting function
void step_motor_set();

// motor reset
void motor_reset();

// (5.625) angle forward rotation
// 64 active for 1 cycle
void one_step_rotation();

// 1 cycle forward rotation
void one_cycle_rotation();

// (5.625) angle backward rotation
// 64 active for 1 cycle
void one_step_reverse_rotation();

// 1 cycle backward rotation
void one_cycle_reverse_rotation();

// set step delay
// higher motor delay, slower
// max speed delay value: 700
void set_motor_speed(uint32_t motor_delay);