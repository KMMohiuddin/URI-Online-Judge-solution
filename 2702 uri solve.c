#include<stdio.h>

int main()
{
    int ca,ba,pa,cr,br,pr,sc=0,sb=0,sp=0,s=0;
    scanf("%d %d %d %d %d %d",&ca,&ba,&pa,&cr,&br,&pr);
    if (ca<=cr)
    {

      sc=cr-ca;
    }
    if(ba<=br)
    {
        sb=br-ba;
    }
    if (pa<=pr)
    {
        sp=pr-pa;
    }
    s=sc+sb+sp;
    printf("%d\n",s);
}
/**solve v2.**/

#include<stdio.h>

int main()
{
    int ca,ba,pa,cr,br,pr,s=0;
    scanf("%d %d %d %d %d %d",&ca,&ba,&pa,&cr,&br,&pr);
    if (ca<=cr)
    {

      s=s+cr-ca;
    }
    if(ba<=br)
    {
        s=s+br-ba;
    }
    if (pa<=pr)
    {
        s=s+pr-pa;
    }
    printf("%d\n",s);
}
