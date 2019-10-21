#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
        for(j=1;j<=n*4;j++)
        {


            if(j%4==0)
            {
                printf("PUM\n");
            }
            else
                printf("%d ",j);

        }

}
