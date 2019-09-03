#include<stdio.h>

int main()
{
    int a,s,x;
    scanf("%d",&s);
    for(x=1;x<=s;x++)
    {
        scanf("%d",&a);
        if(a==0)
            {
                printf("NULL\n");
            }


        else if(a%2==0)
            {
              if(a>0)
                {
                  printf("EVEN POSITIVE\n");
                }
              else if(a<0)
                {
                    printf("EVEN NEGATIVE\n");
                }
            }
        else if(a%2!=0)
            {
                if(a>0)
                {
                  printf("ODD POSITIVE\n");
                }
                else if(a<0)
                {
                    printf("ODD NEGATIVE\n");
                }
            }

    }

    return 0;

}
