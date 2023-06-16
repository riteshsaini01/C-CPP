#include <stdio.h>
int main()
{
    int love;
    printf("enter the value of love triangle=");
    scanf("%d",&love);

    

    switch (love)
    {
    case 1:
        printf("megha loves kammo\n"); 
        int percentagelove;
        printf("enter the number to find love=");
        scanf("%d",&percentagelove);

        switch (percentagelove)
        {
        case 0:
            printf("precentage is 99 percent\n");
            break;
        
        default:
            printf("breakup");
            break;
        }  
        break;
    case 2:
        printf("gangster loves kammo\n");
        int fuckbegins;
        printf("level of fuck(intense69,simple)=");
        scanf("%d",&fuckbegins);

        switch (fuckbegins)
        {
        case 69:
            printf("gangster fucks kammo intensely");
    
            break;
        
        default:
            printf("gangster fuck kammo simply");
            break;
        }
        break;
    case 3:
        printf("megha is a bestfriend of gangster");
        break;
    
    default:
        printf("they have a threesome");
        break;
    }
    
return 0;
  
}