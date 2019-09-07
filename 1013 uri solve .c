#include<stdio.h>
int main()
{
    int A,B,C,maxAB,maxABC;
    scanf("%d %d %d",&A,&B,&C);
    
        maxAB=(.5*(A+B+(abs(A-B))));
    maxABC=(.5*(maxAB+C+(abs(maxAB-C))));
    printf("%d eh o maior\n",maxABC);
    

    return 0;
}
