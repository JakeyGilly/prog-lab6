#pragma once
#include "mbed.h"

void setMotorSpeed(float speed, DigitalOut &dir1, DigitalOut &dir2, PwmOut &pwm);