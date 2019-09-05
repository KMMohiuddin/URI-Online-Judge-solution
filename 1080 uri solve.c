
#include <stdio.h>

int main()
{
 int n, x = -1, d, i;
 for (i = 1; i < 11; ++i)
 {
  scanf("%d", &n);
  if(x < n)
   x = n, d = i;
 }

 printf("%d\n%d\n", x, d);

 return 0;
}
