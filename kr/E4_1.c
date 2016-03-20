#include <stdio.h>

#define LIMIT 10

void putchars(char s[]);
int getchars(char s[], int lim);
int strindex(char s[], char t[]);

int main(void)
{
    char s[LIMIT+1], t[LIMIT+1];
    // There is a bug, the coming letter after the limit will be omitted...because it hasn't been used;then the 2nd getchars will miss it;
    int len1 = getchars(s,LIMIT);
    putchars(s);
    printf("The length of the string:%d\n",len1);
    int len2 = getchars(t,LIMIT);
    putchars(t);
    printf("The length of the string:%d\n",len2);
    int find = strindex(s,t);
    printf("\n\nThe position of rightmost str2 in str1 is:%d\n\n",find);

}

void putchars(char s[])
{
    int i = 0;
    while(s[i] != '\0')
        putchar(s[i++]);
    putchar('\n');
}

int getchars(char s[], int lim)
{
    int c, i;

    i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < lim)
    {
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

int strindex(char s[], char t[])
 {
    int i, j, k;
    int rm = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
            if (k > 0 && t[k] == '\0' && i > rm)
                rm = i;
        }
    return rm;
 }
