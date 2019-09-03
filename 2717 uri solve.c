#include<stdio.h>
int main()
{
    int n,a,b,x;
    scanf("%d %d %d",&n,&a,&b);
    x=a+b;
    if(x<=n)
       {
           printf("Farei hoje!\n");
       }
        else
        {
            printf("Deixa para amanha!\n");
        }
        return 0;
}
