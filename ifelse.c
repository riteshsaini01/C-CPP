#include <stdio.h>
int main()
{
   /* printf("check whether you can vote or not!\n");
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered your age=%d\n",age);

    if (age>=18){
        printf("you can vote");
        }
    else{
        printf("you cannot vote");
        }*/
    int a;    
    printf("enter the value of a=\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("a is a even number");

    }
    else if(a%2==1){
        printf("a is an odd number");
    }
    else {
        printf("it is not a number");
    }    
    return 0;
}