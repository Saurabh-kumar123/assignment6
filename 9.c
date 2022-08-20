#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter a two number\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
        if(i%a==0&&i%b==0)
        break;
      printf("LCM is %d",i);
}
