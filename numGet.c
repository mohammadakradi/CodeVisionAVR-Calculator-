int numGet(void)
{
    flag=0;
    num=0;
    while(flag<1){
        keypad();
        if(key!=20){
            sprintf(c,"%d",key);
            lcd_puts(c);
            delay_ms(300);
            num+=key;
            num*=10;
        }
    }
    return num/10;
}
