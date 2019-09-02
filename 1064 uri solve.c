#include<stdio.h>
int main()
{
    int i,a=0;
    float n,x,b=0;
    for(i=1;i<=6;i++)
        {
        scanf("%f",&n);
        if(n>0)
            {
            a++;
            b=b+n;
            }
        }
        x=b/a;
    printf("%d valores positivos\n",a);
    printf("%.1f\n", x);
    return 0;
}

