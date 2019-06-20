void keypad(void)
{
key=20;
PORTB=0xFF;
//---- ROW1 ----
PORTB.4=0;
delay_ms(2);
if(PINB.0==0) key=7;
if(PINB.1==0) key=4;
if(PINB.2==0) key=1;
if(PINB.3==0) {lcd_clear(); flag = 0;}
PORTB.4=1;
//---- ROW2 ----
PORTB.5=0;
delay_ms(2);
if(PINB.0==0) key=8;
if(PINB.1==0) key=5;
if(PINB.2==0) key=2;
if(PINB.3==0) key=0;
PORTB.5=1;
//---- ROW3 ----
PORTB.6=0;
delay_ms(2);
if(PINB.0==0) key=9;
if(PINB.1==0) key=6;
if(PINB.2==0) key=3;
if(PINB.3==0) { lcd_putchar('='); flag=5; delay_ms(300); }
PORTB.6=1;
//---- ROW4 ----
PORTB.7=0;
delay_ms(2);
if(PINB.0==0) { lcd_putchar('/'); flag2=1; delay_ms(300); }
if(PINB.1==0) { lcd_putchar('*'); flag2=2;delay_ms(300); }
if(PINB.2==0) { lcd_putchar('-'); flag2=3; delay_ms(300); }
if(PINB.3==0) { lcd_putchar('+'); flag2=4; delay_ms(300); }
PORTB.7=1;
}
