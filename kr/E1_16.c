#include <stdio.h>

#define MAX_LENGTH 1000

int getline(char s[], int limit);
void copy(char to[], char from[]);

int main()
{
    char test[MAX_LENGTH];
    char longest[MAX_LENGTH];
    int max, len;
    max = 0;

    while((len = getline(test,MAX_LENGTH))> 0)
    {
        if(len > max)
        {
            max = len;
            copy(longest, test);
        }
    }
    if(max > 0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int limit)
{
    int c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < limit - 1)
    {
        s[i++] = c;
    }
    if(c == '\n' && i != limit - 1)
        s[i++] = c;
    s[i] = '\0';
    return i;

}

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}
