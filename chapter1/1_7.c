#include <stdio.h>

#define MAX_FAHR    300
#define STEP        20
#define INIT_FAHR   0

int power(int m, int n);        // fine to also do (int, int) in the prototype
float fahr2cels(float f);


main(){
    int i;

    for(i = 0; i < 10; ++i)
        printf("%7d %7d %7d\n", i, power(2,i), power(-3,i));

    printf("-------------------------\n");

    // 1.15 testing
    float fahr;
    printf("    F -->     C\n");
    for(fahr = INIT_FAHR; fahr <= MAX_FAHR; fahr = fahr + STEP){
        printf("%5.0f --> %5.1f\n", fahr, fahr2cels(fahr));
    }

    return 0; // indicates normal, non-erroneous termination
}

int power(int base, int n){
    int i, p;
    p = 1;
    
    for(i = 1; i <= n; ++i){
        p = p * base;
    }
    
    return p;
}


/* -- 1.15 -- */
float fahr2cels(float fahr){
    return 5.0 * (fahr - 32) / 9.0;
}
