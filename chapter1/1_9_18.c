#include <stdio.h>

#define MAXLINE     1000
#define LEN_REQ     80

int getline1(char line[], int maxline);
int removetrail(char rline[]);

int main(){
    int len;
    char line[MAXLINE], longest[MAXLINE];

    while((len = getline1(line, MAXLINE)) > 0)
        if(removetrail(line) > 0)   // this skips the empty lines from being outputted
            printf("%s", line);

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


int removetrail(char s[]){
    int i;

    for(i = 0; s[i] != '\n'; ++i)   // this sets array position i to the end, right before the \n
        ;
    --i;

    for(i > 0; ((s[i] == ' ') || (s[i] == '\t')); --i) // this loops backwards through the string
        ;

    if(i >= 0){     // sets the new end line and null char of the array
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }

    return i;
}
