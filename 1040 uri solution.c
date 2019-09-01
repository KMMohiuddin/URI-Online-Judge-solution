#include<stdio.h>

int main()
{
    double n1,n2,n3,n4,avg,r,avg2;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    avg=(n1*2+n2*3+n3*4+n4)/10;
    printf("Media: %.1lf\n",avg);
    if (avg>=7)
        {
         printf("Aluno aprovado.\n");
        }
    if (avg<5)
        {
        printf("Aluno reprovado.\n");
        }
    else if(avg<=6.9&&avg>=5)
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&r);
            printf("Nota do exame: %.1lf\n",r);
            avg2=(avg+r)/2;
            if (avg2>=5)
            {
                printf("Aluno aprovado.\n");
            }
            else
            {
               printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n",avg2);

        }
        return 0;



}
