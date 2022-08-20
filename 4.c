#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i*i;
    printf("sum of squar is  %d",sum);
    return 0;
}