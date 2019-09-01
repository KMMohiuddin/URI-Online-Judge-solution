#include<stdio.h>

int main()
{
    double s,a,z;
    scanf("%lf",&s);
  if (s>=0&&s<=400)
  {
      a=s+(s*1.15);
      z=a-s;
      printf("Novo salario: %.2lf\n",a);
      printf("Reajuste ganho: %.2lf\n",z);
      printf("Em percentual: 15 % %\n");
  }
  else if (s>=400.01&&s<=800)
  {
      a=s+(s*1.12);
      z=a-s;
      printf("Novo salario: %.2lf\n",a);
      printf("Reajuste ganho: %.2lf\n",z);
      printf("Em percentual: 12 % %\n");
  }
  else if (s>=800.01&&s<=1200)
  {
      a=s+(s*1.10);
      z=a-s;
      printf("Novo salario: %.2lf\n",a);
      printf("Reajuste ganho: %.2lf\n",z);
      printf("Em percentual: 10 % %\n");
  }
  else if (s>=1200.01&&s<=2000)
  {
      a=s+(s*1.7);
      z=a-s;
      printf("Novo salario: %.2lf\n",a);
      printf("Reajuste ganho: %.2lf\n",z);
      printf("Em percentual: 7 % %\n");
  }
  else if (s>2000.01)
  {
      a=s+(s*1.4);
      z=a-s;
      printf("Novo salario: %.2lf\n",a);
      printf("Reajuste ganho: %.2lf\n",z);
      printf("Em percentual: 4 % %\n");
  }
  return 0;
}
/*this sourse code will show wrong answer 5%.if you find the wrong show me */
/* correct sourse code is given bellow*/
#include<stdio.h>
int main()
{
 float n;
 scanf("%f", &n);
 if (n <= 400.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", n * 1.15, n * 0.15);
 else if (n <= 800.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", n * 1.12, n * 0.12);
 else if (n <= 1200.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", n * 1.10, n * 0.10);
 else if (n <= 2000.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", n * 1.07, n * 0.07);
 else
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", n * 1.04, n * 0.04);
 return 0;
}


