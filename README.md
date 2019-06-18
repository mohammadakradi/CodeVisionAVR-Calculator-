Most of students have problem getting separated numbers from keypad.
We have solved this problem by putting two functions on CodeVisionAVR repository in github.
First be aware you should import following libraries:
  *  #include <mega32a.h>
  *  #include <alcd.h>
  *  #include <delay.h>
  *  #include <stdio.h>
Then copy the keypad function and put it in your code.
This function changes the value of the k variable to pushed button.
If you push operator buttons (+, *, -, /) it will change value of the flag variable which we use it in the numGet function. 
So it should be defined as a global variable.
Now copy and put numGet function in your code. When we call this function, it begins to get nums and creates an integer number which is saved in num variable and displays on LCD until we push one of operator buttons which changes the flag's value.
