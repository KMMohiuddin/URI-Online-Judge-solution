#include<stdio.h>

int main()
{
    int a,s,d,f=0,g=0;
    scanf("%d",&a);
    for(s=1;s<=a;s++)
    {
        scanf("%d",&d);
        if(d>=10&&d<=20)
        {
            f++;
        }
        else
            {
                g++;
            }


    }
    printf("%d in\n",f);
    printf("%d out\n",g);
    return 0;
}
