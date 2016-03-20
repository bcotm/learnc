#include <stdio.h>

#define MAX_LENGTH 1000

int getline(char s[], int limit);
int trimline(char s[]);

int main()
{
    char test[MAX_LENGTH];
    char longest[MAX_LENGTH];
    int max, len;
    max = 0;

    while((len = getline(test,MAX_LENGTH))> 0)
    {
        if((len = trimline(test)) > 0)
            printf("After trimming :\n%s\nlength:%d\n", test, len);
        else
            printf("This is an empty line.\n");
    }
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

int trimline(char s[])
{
    int i = 0;
    int end = 0;

    while(s[i++] != '\0') ;

    i--;

    while(!end && i >= 0)
    {
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
            end = 1;
        else
            i--;
    }
    s[++i] = '\n';
    s[++i] = '\0';
    if(!end) return 0;
    else return i-1;
}
