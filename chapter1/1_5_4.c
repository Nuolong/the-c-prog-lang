#include <stdio.h>

#define IN  1
#define OUT 0

main(){
    
    /*
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;       // same as nl = (nw = (nc = 0));        assignments from right to left.

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    */

    /* Exercise 1-12 */
    
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == OUT){                       // here, state = OUT means we haven't started a new line yet
                putchar('\n');
                state = IN;             // we have started the new line for the new word
            }
        }else{                  // for characters of the word
            putchar(c);
            state = OUT;
        }
    }
    
}
