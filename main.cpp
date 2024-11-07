#include "mbed.h"
#include "tb6612.h"

DigitalOut g_dir1(D2);
DigitalOut g_dir2(D3);
PwmOut g_pwm(D4);

int main() {
    while (true) {
        setMotorSpeed(1.0, g_dir1, g_dir2, g_pwm);
        thread_sleep_for(1000);
        setMotorSpeed(0.0, g_dir1, g_dir2, g_pwm);
        thread_sleep_for(1000);
        setMotorSpeed(-0.5, g_dir1, g_dir2, g_pwm);
        thread_sleep_for(1000);
        setMotorSpeed(0, g_dir1, g_dir2, g_pwm);
        thread_sleep_for(1000);
    }
}