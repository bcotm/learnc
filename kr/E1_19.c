#include <stdio.h>

#define MAXLINE 1000

int getline(char s[],int limit);
void reverse(char s[], int length);

int main()
{
    char line[MAXLINE];
    int length;

    while(length = getline(line, MAXLINE))
        reverse(line, length);
    return 0;
}

int getline(char s[], int limit)
{
    int c, i;

    i = 0;
    while(((c = getchar()) != EOF) && i < limit - 1 && c != '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

void reverse(char s[], int length)
{
    int i;
    for(i = length - 1;i >= 0;i--)
        putchar(s[i]);
    putchar('\n');
}
