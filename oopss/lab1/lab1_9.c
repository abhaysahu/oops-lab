#include<stdio.h>
int main()
{
    int a[10],n,i,max=0,min=0;
    printf("enter a number to make a array:- ");
    scanf("%d",&n);
    printf("enter %d number:-",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("largest number is:- %d",max);
    printf("\nsmallest number is:- %d",min);
    getch();
}
