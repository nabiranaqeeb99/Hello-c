#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\n Table of %d:\n",n);
    for(i=1;i<=12;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}