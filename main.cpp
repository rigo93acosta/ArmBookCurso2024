#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD1(LED1);
    LD1 = true;
    while (true) {
        if (B1_USER == true) {
            LD1 = false;
        }
        else{
            LD1 = true;
        }
    }
}
