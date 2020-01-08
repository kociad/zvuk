#include "settings.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 1 << PB1;
    PORTB = PORTB | (1 << PB7); //PIN7 je vstup s rezistorem

    while (1)
        {
        if (!(PINB & (1 << PB7)))
            for(int E=0;E<=5;E++)
                {
                    for(int count=0;count <=500;count++)
                        {   
                            PORTB ^= (1 << PB1);
                            _delay_ms(2);
                        }
                    _delay_ms(500);
                }
        }
    return 0;
} /* main */
