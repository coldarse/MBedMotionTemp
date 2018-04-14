#include "mbed.h"
#include "LM75B.h"
#include "C12832.h"

LM75B tmp(p28,p27);
C12832 lcd(p5, p7, p6, p8, p11);

int main ()
{
    lcd.cls();
    lcd.locate(0,3);
    lcd.printf("Temperature");
    
    while (1) {
        lcd.locate(0,15);
        lcd.printf("%.2f Degrees\n",tmp.read());
        wait(1.0);
       
    }
}
