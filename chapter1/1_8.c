#include <stdio.h>

int power(int m, int);

main(){
    int i;

    for(i = 0; i < 10; ++i)
        printf("%7d %7d %7d\n", i, power(2,i), power(-3,i));

    return 0;
}

int power(int base, int n){
    int p;
    
    for(p = 1;  n > 0; ++i)     // the n in here doesn't affect the n passed to the function in main
        p = p * base;
    
    return p;
}

// the parameters are passed by value, so a local copy of the variable is dealt with in the function.
// it doesn't affect the original passed variable.

// arrays are different, however. When it is an argument, the location/address of the beginning of the
// array is passed to the funciton, so functions actually access and alter the array passed originally,
// instead of making a copy of itself.



