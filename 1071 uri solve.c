#include<stdio.h>

int main()
{
    int a,s,d,f,sum=0;
    scanf("%d %d",&f,&s);
    if (f<s)
    {

         for(a=f+1;a<s;a++)
    {
        if(a%2!=0)
        {
            sum=sum+a;

        }
    }
    }
    else
    {

         for(a=s+1;a<f;a++)
    {
        if(a%2!=0)
        {
            sum=sum+a;

        }
    }


    }
 printf("%d\n",sum);

}


