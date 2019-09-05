#include<stdio.h>

int main()

{
    int a,s;
    double x,z,y,d=0.0;
    scanf("%d",&s);
    for(a=0;a<s;a++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        d=((x*2)+(y*3)+(z*5))/10;
        printf("%.1lf\n",d);
    }

}
