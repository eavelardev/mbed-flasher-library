# mbed-flasher-library

example use library

main.cpp
```c++
#include "mbed.h"
#include "Flasher.h"
 
Flasher led(LED2);
 
int main() {
    led.flash(5);
    led.flash(2);
}
```
