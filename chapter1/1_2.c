#include <stdio.h>

/* print Fahrenheit-Celsius table 
 * for fahr = 0, 20, ..., 300    */

main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelsius\n"); // table header

    fahr = lower;
    while(fahr <= upper){
        celsius = 5.0 * (fahr - 32.0) / 9.0;      // ' * (5/9) ' would truncate to 0.
        printf("%10.0f\t%7.1f\n", fahr, celsius);  // fractional parts are discarded for integer division.
        fahr = fahr + step;     // ^ %3d and %6d for right-justified. The number is the width of the field.
    }

    printf("----------------------------------------\n");
    
    printf("Celsius\t  Fahrenheit\n"); // my personal tab is 8 characters long
     
    lower = -17.8;
    upper = 150;
    step = 10;
    
    celsius = lower;

    while(celsius <= upper){
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%7.1f\t%12.0f\n", celsius, fahr);
        celsius = celsius + step; 
    }
}


// just one float is all it takes in an arithmetic operation for a float result to be made.

// %3.0f => floating-point number printed at least 3 characters wide, no decimal point/fraction digits.
// %6.1f => ...................................... 6 characters wide, 1 digit after the decimal point.
// .2f   => floating-point, 2 characters after decimal
// 6f    => floating-point, at least 6 characters wide
// %o = octal, %x = hex, %c = char, %s = char string, %% = itself
