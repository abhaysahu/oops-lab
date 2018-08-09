#include<stdio.h>
#include<math.h>
int main()
{
    int num,pre,r,p,rf,rs,pf,ps,i;
    printf("hiii sir");
    for(i=33;i<=99;i=i+1)
    {
        pre=i*i;
        r=pre%100;
        p=pre/100;

        rf=r%10;
        rs=r/10;

        pf=p%10;
        ps=p/10;

        if(rf==rs&&pf==ps)
            printf("\n answer is:- %d",pre);
    }
}
