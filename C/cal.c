#include <stdio.h>
int main()
{   
    printf("------welcome to my calculator------\n");

    char x;
    float a,b,c;
    printf("enter the operator\n");
    scanf("%c",&x);

    printf("enter the value of a\n");
    scanf("%f",&a);

    printf("enter the value of b\n");
    scanf("%f",&b);

    if (x=='+'){
        c=a+b;
         printf("sum=%f",c);
         }
    else if(x=='-'){
         c=a-b;
         printf("difference=%f",c);
         }
     else if(x=='/'){
         c=a/b;
         printf("division=%f",c);
         }
     else if(x=='*'){
         c=a*b;
         printf("product=%f",c);
         }

    else{printf("foff");}
    return 0;
}