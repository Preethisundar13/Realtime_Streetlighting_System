
#include <reg51.h>

// IR Sensor Inputs
sbit IR1 = P1^0;
sbit IR2 = P1^1;
sbit IR3 = P1^2;
sbit IR4 = P1^3;
sbit IR5 = P1^4;
sbit IR6 = P1^5;

// Relay / LED Outputs
sbit LIGHT1 = P2^0;
sbit LIGHT2 = P2^1;
sbit LIGHT3 = P2^2;
sbit LIGHT4 = P2^3;
sbit LIGHT5 = P2^4;
sbit LIGHT6 = P2^5;

// Delay Function
void delay(unsigned int ms)
{
    unsigned int i,j;
    for(i=0;i<ms;i++)
        for(j=0;j<1275;j++);
}

void main()
{
    LIGHT1 = 0;
    LIGHT2 = 0;
    LIGHT3 = 0;
    LIGHT4 = 0;
    LIGHT5 = 0;
    LIGHT6 = 0;

    while(1)
    {
        if(IR1 == 1) { LIGHT1 = 1; delay(300); LIGHT1 = 0; }
        if(IR2 == 1) { LIGHT2 = 1; delay(300); LIGHT2 = 0; }
        if(IR3 == 1) { LIGHT3 = 1; delay(300); LIGHT3 = 0; }
        if(IR4 == 1) { LIGHT4 = 1; delay(300); LIGHT4 = 0; }
        if(IR5 == 1) { LIGHT5 = 1; delay(300); LIGHT5 = 0; }
        if(IR6 == 1) { LIGHT6 = 1; delay(300); LIGHT6 = 0; }
    }
}
