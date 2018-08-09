#include<stdio.h>
int main()
{
    int min,max;
    int n,i,a[10];
    printf("enter a number:-");
    scanf("%d",&n);
    printf("enter %d number",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    maxmin(a,n,&min,&max);
    printf("max number is=%d",max);
    printf("\nmin number is=%d",min);
}

void maxmin(int a[],int n,int *min,int *max)
{
    int j;

    *min=a[0];
    *max=a[0];
    for(j=1;j<n;j++)
    {
        if(*min>a[j])
            *min=a[j];
        if(*max<a[j])
            *max=a[j];
    }
}
