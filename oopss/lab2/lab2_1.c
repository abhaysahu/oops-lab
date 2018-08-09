#include<stdio.h>
int main()
{
    char *list[50];
    int i,j,n,ch;
    printf("enter a number:-");
    scanf("%d",&n);

    printf("enter %d name:-",n);
    for(i=0;i<n;i++)
    {
        list[i]=(char*)malloc(50);
    }

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        gets(list[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
        puts(list[i]);

    while(1)
    {
        printf("\n1. To insert a Student name:-");
        printf("\n2. To delete a name:-");
        printf("\n3. To print the names:-");
        printf("\n4. exit:-");
        printf("\n5. enter your cho:-");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

            printf("enter your name to add:-");
            n=n+1;
            fflush(stdin);
            gets(list[n]);
            break;
        case 2:
        case 3:
             printf("\n");
             for(i=0;i<n;i++)
             puts(list[i]);

        }
    }
}
