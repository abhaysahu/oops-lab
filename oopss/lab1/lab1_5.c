#include<stdio.h>
int main()
{
    char str[100];
    int c=0,i;
    printf("enter a string:-");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        c++;
    printf("answer is:-%d",c);
}
