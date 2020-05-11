#include <stdio.h>

#define LOWER   0       /* useful comments about these symbolics */
#define UPPER   300     /* these are symbolic constants. CAPITAL as convention to distinguish from variables */
#define STEP    20      /* note, no semicolons at the end of these statements */

int main(){
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
