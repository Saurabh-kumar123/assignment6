#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("%d  digit",count);
    return 0;
    
}