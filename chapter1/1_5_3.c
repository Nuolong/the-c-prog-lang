#include <stdio.h>
#include <stdbool.h>

main(){
    int c, n1;

    n1 = 0;

    /*
    while((c = getchar()) != EOF)
        if(c == '\n')               // '$some_character' is a character constant, which is a small integer
            ++n1;
    printf("%d\n", n1);
    */

    /* 1-8

    while((c = getchar()) != EOF)
        if(c == ' ' || c == '\t' || c == '\n')
            ++n1;
    printf("%d\n", n1);
    */



    /* 1-9

    bool blanks = false;            // toggle

    while((c = getchar()) != EOF)
        if(c == ' '){
            if(!blanks){            // first blank "field" encountered, print it but disregard consecutive ' '
                blanks = true;
                putchar(c);         // same as just printf(' ') since this is only for if c == ' '
            }
        }else{                      // any non-' ' characters
            blanks = false;
            putchar(c);
        }
    */


    /* 1-10 */
    
    while((c = getchar()) != EOF)
        if(c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\\b");
        else if(c == '\\')
            printf("\\\\");
        else
            putchar(c);
    



}
