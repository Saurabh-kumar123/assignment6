#include<stdio.h>
int main()
{
    int i,n,t=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    t=t*i;
    printf("factorial is  %d",t);
    return 0;
}