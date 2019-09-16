#include<stdio.h>

int main()
{

   int n,a,s=0;
   scanf("%d",&n);
   printf("2\n");
   for(a=1;a<=10000;a++)
   {

       if(a%n==0)
       {
           s=a;
           printf("%d\n",s+2);
           s=0;
       }
       else
        continue;
   }
    return 0;
}
