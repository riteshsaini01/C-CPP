#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("ENter the numbers:");
    scanf("%d",&n);
    printf("Odd numbers are:");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
        s += 2*i-1;
    }
    printf("The sum of Odd numbers upto %d terms:%d",n,s);
    return 0;
}