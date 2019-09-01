#include<stdio.h>

int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
    {
        z=a;
        if (a>c&&c>b)
        {
        y=c;
        x=b;
        }
        else
        {
            y=b;
            x=c;
        }
    }
    else if (b>a&&b>c)
    {
        z=b;
        if (b>a&&a>c)
        {
        y=a;
        x=c;
        }
        else
        {
            y=c;
            x=a;
        }
    }
    else if (c>b&&c>a)
    {
        z=c;
         if (c>b&&b>a)
        {
        y=b;
        x=a;
        }
        else
        {
            y=a;
            x=b;
        }
    }



    printf("%d\n%d\n%d\n",x,y,z);
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}
