#include<stdio.h>

int main()
{
    int a,s,x;
    scanf("%d",&s);
    for(a=1;a<=s;a++)
    {
        if(a%2==0)
            {
              x=a*a;
              printf("%d^2 = %d\n",a,x);
            }
    }

}
