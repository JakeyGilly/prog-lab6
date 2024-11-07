#pragma once
#include "mbed.h"

class TB6612 {
    DigitalOut _dir1;
    DigitalOut _dir2;
    PwmOut _pwm;
public:
    TB6612(PinName dir1, PinName dir2, PinName pwm) : _dir1(dir1), _dir2(dir2), _pwm(pwm) { }
    void setSpeed(float speed);
    void operator=(float speed);
};