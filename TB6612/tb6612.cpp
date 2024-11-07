#include "mbed.h"

void setMotorSpeed(float speed, DigitalOut &dir1, DigitalOut &dir2, PwmOut &pwm) {
    if (speed > 0) {
        dir1 = true;
        dir2 = false;
        pwm = speed;
    } else {
        dir1 = false;
        dir2 = true;
        pwm = -speed;
    }
}