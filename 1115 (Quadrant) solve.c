#include<stdio.h>

int main()
{
   int c1,c2;
   while(scanf("%d %d",&c1,&c2)==2)
   {
       if (c1>0&&c2>0)
       {
           printf("primeiro\n");
       }
       else if(c1>0&&c2<0)
       {
           printf("quarto\n");
       }
       else if (c1<0&&c2<0)
       {
           printf("terceiro\n");
       }
       else if (c1<0&&c2>0)
       {
           printf("segundo\n");
       }
       else if(c1==0||c2==0)
       {
           break;
       }
   }
    return 0;
}
