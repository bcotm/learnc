#include <stdio.h>
#include <ctype.h>
/*
    let the main control the s1,s2.
*/

void expand(char s1[], char s2[]);

int main(void)
{
    int c;
    char s1[10], s2[100];
    int i = 0;
    while((c = getchar())!= EOF && i < 10)
    {
        s1[i++]=c;
    }
    expand(s1,s2);
    printf("%s",s2);
    return 0;
}

void expand(char s1[], char s2[])
{
    int i, j, t;

    j = 0;
    for(i = 0; s1[i+2] != '\0'; i++)
    {
        if(((isdigit(s1[i])&&isdigit(s1[i+2]))||
            (islower(s1[i])&&islower(s1[i+2]))||
            (isupper(s1[i])&&isupper(s1[i+2])))
            &&s1[i+1]=='-'&&s1[i]<s1[i+2])
           {
            for(t = 0;t <= (s1[i+2] - s1[i]);t++)
                s2[j++] = s1[i]+t;
            i+=2;
           }
        else
            s2[j++] = s1[i];
    }
    s2[j] = '\0';//remember to end the s2!
}
