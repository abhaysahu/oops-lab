#include<stdio.h>
int main()
{
    int a,b,c,answer;
    printf("enter a number:-");
    scanf("%d",&a);
    printf("enter a number to to divide the first number:-");
    scanf("%d",&b);
    c=a/b;
    answer=b*(c+1);
    printf("next largest multiple divisible is %d",answer);

}
