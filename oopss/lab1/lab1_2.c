#include<stdio.h>
int main()
{
    int i,c=0,num;
    printf("enter a number:-");
    scanf("%d",&num);
    for(i=1;num!=0;i++)
    {
        num=num/10;
        c=c+1;
    }
    printf("answer is %d",c);
}
