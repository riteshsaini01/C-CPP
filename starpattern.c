#include <stdio.h>
void reversestarpattern(int star)
{
    int i,j;
    for (i = 0; i < star; i++)
    {
       for( j = 0; j <=star-i-1; j++)
       {
        
            printf("*");
        
        
       }
        printf("\n");
    }
}
int main()
{
    int star,i,j;
    printf("Enter no. of starpattern lines to print=");
    scanf("%d",&star);

   /* for (i = 0; i < star; i++)
    {
       for( j = 0; j <=i; j++)
       {
        
            printf("*");
        
        
       }
        printf("\n");
    }
       */
      reversestarpattern(star);
       
    
    
return 0;
}