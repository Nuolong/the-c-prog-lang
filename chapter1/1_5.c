#include <stdio.h>


main(){
    
    /*

    int c; // int not char because char can't hold EOF for the loop condition

    
    -- 1.5.1 -- 

    c = getchar();
    while(c != EOF){    // EOF is a symbolic constant in stdio.h. It != any char values.
        putchar(c);
        c = getchar();
    }
    

    -- 1.5.2 --
    
    while((c = getchar()) != EOF)   // () around the assignment is necessary
        putchar(c);                 // precendence of != is higher than =

    
    -- Exercises --

    */


    printf("Value of EOF: %d\n",EOF);         // 1-7

    
    int c;                                    // 1-6
    
    while((c = getchar()) != EOF){
       printf("%d\n", c != EOF);    // note: prints out 1 or 0 for every char, including newline from ENTER
    }

}





