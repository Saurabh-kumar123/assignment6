#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i*2-1;
    printf("sum of odd is  %d",sum);
    return 0;
}