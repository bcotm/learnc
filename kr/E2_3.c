#include <stdio.h>

#define MAX_LENGTH 100

unsigned long htoi(char s[]);
int getline(char s[], int limit);

int main()
{
    int len;
    char s[MAX_LENGTH];
    while((len = getline(s,10))>0)
        printf("After htoi:%d\n",htoi(s));
    return 0;
}

unsigned long htoi(char s[])
{
    int i=0;
    unsigned long n=0;
    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            /*why n*=16, n*=10 ...that is not a problem*/
            for(i = 2;s[i] != '\0'; i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                    n = 16*n + (s[i]-'0');
                else if(s[i] >= 'a' && s[i] <= 'f')
                    n = 16*n + 10 + (s[i] - 'a');
                else if(s[i] >= 'A' && s[i] <= 'Z')
                    n = 16*n + 10 + (s[i] - 'A');
                else
                    break;
            }
            return n;
        }
    else
        return -1;
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
