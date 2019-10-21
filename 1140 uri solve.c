#include<stdio.h>
#include<string.h>
int main()
{
    char w[1000],s;
    int i,l,c=0;
    scanf("%[^\n]",&w);
    l=strlen(w);
    for(i=0;i<=l;i++)
    {
    gets(toupper(w[i]));

    if (s==' ')
    {
        c++;

    }
    }
    printf("%d\n",c);

}
