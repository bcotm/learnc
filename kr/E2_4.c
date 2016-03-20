#include <stdio.h>

#define MAX_LENGTH 100

int getline(char s[], int lim);
void squeeze(char s1[], char s2[]);

int main()
{
    int len;
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    printf("s1:\n");
    while((len = getline(s1,MAX_LENGTH)) == 0) ;
    printf("s2:\n");
    while((len = getline(s2,MAX_LENGTH)) == 0) ;
    squeeze(s1,s2);
    printf("After squeezing:\n%s",s1);
}

int getline(char s[], int lim)
{
    int i = 0;
    int c;
    while( i < lim - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n' && i != lim - 1)
        s[i] = c;
    s[++i] = '\0';
    return i;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    i = j = 0;
    while(s1[i] != '\0')
    {
        k = 0;
        while(s1[i] != s2[k] && s2[k] != '\0') k++;
        if(s2[k] == '\0')
            s1[j++] = s1[i];
        i++;
    }
    s1[j] = '\0';
}
