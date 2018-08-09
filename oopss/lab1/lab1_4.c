#include<stdio.h>
int main()
{
    int num,ans;
    printf("enter a number to find factorial:-");
    scanf("%d",&num);
    ans=fact(num);
    printf("answer is:-%d",ans);
}
int fact(int num)
{
    if(num==0||num==1)
        return 1;
    else
        return (num*fact(num-1));
}
