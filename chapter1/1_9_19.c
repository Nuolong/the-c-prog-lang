#include <stdio.h>

#define MAXLINE     1000
#define LEN_REQ     80

int getline1(char line[], int maxline);
void reverse(char rline[]);

main(){
    int len;
    char line[MAXLINE], longest[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
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

void reverse(char rline[]){
    int i, j;
    char temp;

    for(i = 0; rline[i] != '\n'; ++i)   // assumption made: the end of the line to reverse is \n
        ;
    --i;

    j = 0;
    while(j < i){   // j at front, i at back of string to be reversed
        temp = rline[j];
        rline[j] = rline[i];
        rline[i] = temp;
        --i;
        ++j;
    }
}



