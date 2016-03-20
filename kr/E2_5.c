#include <stdio.h>

#define MAX_LENGTH 1000

int getline(char s[], int lim);
int any(char s1[], char s2[]);

int main(void)
{
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    int len, pos;
    printf("s1:\n");
    while((len = getline(s1,MAX_LENGTH)) == 0) ;
    printf("s2:\n");
    while((len = getline(s2,MAX_LENGTH)) == 0) ;
    pos = any(s1,s2);
    printf("the first position of any s2's char in s1:%d",pos);
}

int getline(char s[], int lim)
{
    int i = 0;
    int c;

    while(i < lim - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    if(c == '\n' && i != lim - 1)
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}

int any(char s1[], char s2[])
{
    int i = 0;
    int j;
    int pos;
    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
                return i;
            j++;
        }
        i++;
    }
    return -1;
}
