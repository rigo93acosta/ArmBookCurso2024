#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);
    DigitalOut LD1(LED2);

    volatile int count = 0; //Variable
    while (true) {
        if (LD1 == B1_USER) {
            LD1 = B1_USER;
            count = count + 1;
        }
    }
}
