#include <stdio.h>

main(){

    /*
    // -- #1 --
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);     // %ld = long
    */


    // -- #2 -- 
    double nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;                       // null statement: for loops require a body
    printf("%.0f\n",nc);        // %f for both float and double


}

// while and for loops test at the top of the loop before proceeding with the body
