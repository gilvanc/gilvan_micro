#include <msp430.h> 

/*
 * main.c
 */


int main(void) {
        WDTCTL = WDTPW | WDTHOLD;
        P1OUT = 0x00;
        P1REN |= BIT3;
        P1DIR |= 0xFF;
        P1DIR &= ~BIT3;

        for(;;){
            if((P1IN & BIT3) == 0)
                P1OUT |= (BIT0 | BIT6);
        }
	return 0;
}
