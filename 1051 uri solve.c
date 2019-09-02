#include<stdio.h>

int main()
{
    double s,t;
    scanf("%lf",&s);
    if (s<=2000)
    {
        printf("Isento\n");
    }
    else
    {
        if(s>=2000.01&&s<=3000)
    {
        t=((s-2000)*.08);
    }
    else if (s>=3000.01&&s<=4500)
    {
        t=(1000*.08)+((s-3000)*.18);
    }
    else if (s>=4500.01)
    {
        t=(1000*.08)+(1500*.18)+((s-4500)*.28);
    }

        printf("R$ %.2lf\n",t);
    }
    return 0;

}
