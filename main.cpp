#include "mbed.h"

DigitalOut  myled(LED1);
DigitalIn   myButton(USER_BUTTON);
Serial      pc(USBTX, USBRX);   //Use default TX and RX. Available via USB Com port when using PGM-NUCLEO programmer

int main() {
    pc.printf("Hello World");   // Write to default UART. Available via USB Com port when using PGM-NUCLEO programmer

    //Endless while loop
    while(1) {
        myled = 1;          // LED is ON
        wait_ms(200);       // 200 ms
        myled = 0;          // LED is OFF
        wait_ms(500);       // 500 ms

        //As long as button is pressed, turn LED on
        while(myButton == 1) {
            myled = 1;      // LED is ON
        }
    }
}
