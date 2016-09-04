#ifndef MBED_FLASHER_H
#define MBED_FLASHER_H
 
#include "mbed.h"
 
class Flasher {
public:
    Flasher(PinName pin);
    void flash(int n);
  
private:  
    DigitalOut _pin;
};
 
#endif
