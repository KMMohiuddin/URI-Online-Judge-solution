#include<stdio.h>
#include <string.h>

int main()
{
    char c[100];
   int a,s,d,f,t=0;
   scanf("%d",&a);
   for(s=0;s<a;s++)
   {
       scanf("%s",c);
        f = strlen(c); /**strlen(c) দারা মুল্ত char এ যে কয়টা ঘর নিসি তা count করি**/
       for(d=0,t=0;d<f;d++)
       {
           if (c[d]=='0')
           {
              t=t+6;
           }
           else if (c[d]=='1')
           {
              t=t+2;
           }
           else if (c[d]=='2')
           {
              t=t+5;
           }
           else if (c[d]=='3')
           {
              t=t+5;
           }
           else if (c[d]=='4')
           {
              t=t+4;
           }
           else if (c[d]=='5')
           {
              t=t+5;
           }
           else if (c[d]=='6')
           {
              t=t+6;
           }
           else if (c[d]=='7')
           {
              t=t+3;
           }
           else if (c[d]=='8')
           {
              t=t+7;
           }
           else if (c[d]=='9')
           {
              t=t+6;
           }

       }
       printf("%d leds\n",t);

   }

}
