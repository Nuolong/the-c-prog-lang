#include <stdio.h>

/* 
#define MAX_LENGTH  10
#define MAX_COUNT   10
#define IN          1
#define OUT         0
*/

main(){
    
    int c, i, j, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");
    for(i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    

    /* -- EXERCISE 1-14 -- */
    for(i = 0; i < 10; ++i){
        printf("  %d  ", i);
        for(j = 0; j < ndigit[i]; ++j){
            putchar('*');
        }
        putchar('\n');
    }
    printf("  W  ");
    for(i = 0; i < nwhite; ++i)
        putchar('*');
    printf("\n  O  ");
    for(i = 0; i < nother; ++i)
        putchar('*');
    putchar('\n');



    /* -- EXERCISE 1-13 -- 
    int word_len[MAX_LENGTH];
    int c, l, i, j, status;

    for(i = 0; i < MAX_LENGTH; ++i)
        word_len[i] = 0;

    status = OUT;
    while((c = getchar()) != EOF){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){   // only counting # letters in each word
            if(status == OUT){
                l = 0;
                status = IN;
            }
            ++l;
        }else{              // any character that is not a letter is the word delimeter
            if(status == IN){
                if(l > MAX_LENGTH)
                    ++word_len[0];      // if word entered has length > 50 then count it as a 0 length
                else
                    ++word_len[l];
                status = OUT;
            }
        }
    }

    // print the histogram
    for(i = 0; i < MAX_LENGTH; ++i){
        printf(" %d ", i);
        for(j = 0; j < word_len[i]; ++j){
            putchar('*');
        }
        putchar('\n');
    }
    */

}
