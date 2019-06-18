Lots of students have many problems with getting seprated numbers
from keypad. We have solved this problem by putting two functions
on CodeVisionAVR repository in github.
Firs be aware you should import wanted libraries:
    #include <mega32a.h>
    #include <alcd.h>
    #include <delay.h>
    #include <stdio.h>
Then copy keypad function and put it on your code.
This function changes the value of k variable to pushed button.
If you push oprator buttons(+, *, -, /) it will change the value
of flag variable which we use it in numGet function. So it should
define as a global variable.
Now copy and put numGet function in your code. When we call this 
function, it began to getting nums and create an integer number
which saved in num variable and showed on LCD till we push one of
operator buttons which changes flag's value.