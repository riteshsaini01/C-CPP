#include <stdio.h>
int main()
{

    /* int num, i = 0;
    printf("enter the number");
    scanf("%d", &num);
    do
    {
        i = i + 1;
    
        printf("%d\n", num * i);
    } while (i < 10); */



    int i,num;
    printf("enter the num");
    scanf("%d",&num);
    for ( i = 1; i < 11;i++)
    {
        printf("%dx%d=%d\n",num,i,i*num);
    }
    return 0;
}
