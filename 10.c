#include<stdio.h>
int main()
{
    int i,n,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("revers is  %d",rev);
    return 0;
}