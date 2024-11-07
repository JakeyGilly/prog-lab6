#include "mbed.h"
#include "tb6612.h"

void TB6612::setSpeed(float speed) {
    if (speed > 0) {
        _dir1 = true;
        _dir2 = false;
        _pwm = speed;
    } else {
        _dir1 = false;
        _dir2 = true;
        _pwm = -speed;
    }
}

void TB6612::operator=(float speed) {
    setSpeed(speed);
}
