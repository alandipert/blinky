#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  for(;;){
    _delay_ms(100);
    PORTB ^= (1<<PB5);
  }
  return 0;
}
