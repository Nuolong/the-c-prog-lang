#include <stdio.h>

#define MAXLINE     1000

// these are external variables, an alternative to automatic variables. this sets aside storage for them.
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline1(void); // note: void must be used for explicitly empty list. discussed later
void copy(void);

main(){
    int len;
    extern int max;         // declarations of external variables in the functions that want to use it
    extern char longest[];  // a common practice to put all external variable definitions in the beginning
                            // of the file, and so you can remove all further 'externs' in following funcs.

    max = 0;
    while((len = getline1()) > 0)
        if(len > max){
            max = len;
            copy();
        }
    if(max > 0)
        printf("%s\n", longest);
    
    return 0;
}

/* read a line into s and return its length */
int getline1(void){
    int c, i;
    extern char line[]

    for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';        // \0 is the null character that denotes the end of an array.
    return i;
}


/* copy 'from' into 'to' assuming that 'to' is big enough */
void copy(void){
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}


// a usual practice is to collect extern variable declarations and functions in a header
// and then #include at the top of every source file. 
// .h suffix for headers is conventional!

// definition: place where variable is created/assigned storage
//
// declaration: places where nature of the variable is stated but storage isn't allocated.
