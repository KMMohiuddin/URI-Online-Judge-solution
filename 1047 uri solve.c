#include<stdio.h>

int main()
{
    int x,a,y,b,z,m;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    if (x<y)
    {

       m=(60-a)+b;
       if (m>60)
       {
           z=(y-x);
           m=m-60;
       }
       else
        {
            z=(y-x)-1;
        }
    }
    else if(x>y)
    {

        m=(60-a)+b;
       if (m>60)
       {
           z=(y+(24-x));
           m=m-60;
       }
        else
        {
            z=(y+(24-x))-1;
        }
    }
    else if(x==y)
    {
        if(a<b)
        {
            z=0;
            m=b-a;
        }
        else if(a>b)
        {
            z=23;
            m=(60-a)+b;
        }
        else
            {
             z=24;
             m=0;
            }

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",z,m);
    return 0;
}
