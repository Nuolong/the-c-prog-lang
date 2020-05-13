#include <stdio.h>

#define MAXLINE     1000
#define LEN_REQ     80

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    char line[MAXLINE], longest[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0)
        if(len > LEN_REQ){          
            copy(longest, line);
            printf("%s\n", longest);    // prints out any lines that are greater than LEN_REQ symbolic constant
        }

    return 0;
}

/* read a line into s and return its length */
int getline1(char s[], int lim){
    int c, i;

    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';        // \0 is the null character that denotes the end of an array.
    return i;
}


/* copy 'from' into 'to' assuming that 'to' is big enough */
void copy(char to[], char from[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
