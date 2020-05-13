#include <stdio.h>

#define MAXLINE     1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while((len = getline(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
    if(max > 0)
        printf("%s\n", longest);
    
    return 0;
}

/* read a line into s and return its length */
int getline(char s[], int lim){
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
