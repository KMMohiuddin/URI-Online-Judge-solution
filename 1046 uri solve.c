#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    if (x<y)
    {
       z=y-x;
    }
    else if(x>y)
    {
        z=y+(24-x);
    }
    else
    {
        z=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",z);
    return 0;
}
