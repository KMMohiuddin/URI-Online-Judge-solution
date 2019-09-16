#include <stdio.h>

#include <string.h>

int main()
{
    char n[10000],n1[10000];
    int i,j,k,l,x,m,c,T;
    scanf("%d",&T);
    for(l=0;l<T;l++)
    {
        scanf("%s",n);
        scanf("%s",n1);
        i = strlen(n);
        j= strlen(n1);
        if(j>i)
            printf("nao encaixa\n");
        else if(i>=j)

        {
            k = i-j;
            m=0;
            c =0;
            for(x=k; x<i; x++)
            {
                if(n[x]==n1[m])
                    c++;
                m++;
            }
            if(c== j)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
}
