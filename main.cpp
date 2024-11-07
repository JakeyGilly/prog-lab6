#include "mbed.h"
#include "tb6612.h"

int main() {
    TB6612 motor(D2, D3, D4);
    while (true) {
        motor = 1;
        ThisThread::sleep_for(1000ms);
        motor = 0;
        ThisThread::sleep_for(1000ms);
        motor = -0.5;
        ThisThread::sleep_for(1000ms);
        motor = 0;
        ThisThread::sleep_for(1000ms);
    }
}