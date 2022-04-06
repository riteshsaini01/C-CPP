#include <stdio.h>
int main()
{
    printf("check whether you can vote or not!\n");
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered your age=%d\n",age);

    if (age>=18){
        printf("you can vote");
        }
    else{
        printf("you cannot vote");
        }
    return 0;


  
}