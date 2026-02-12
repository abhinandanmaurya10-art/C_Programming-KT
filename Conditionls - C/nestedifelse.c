#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Positive Integer: ");
    scanf("%d", &num);

    if (num % 5 == 0) // ye if aur nicche ka else dono paired hai 
    {
        if (num % 3 == 0)
        
            printf(" Divisible by 5 and 3");
            else  // ye dono if else paired hai 
            {
                printf("Not Divisible by 5 and 3");
            }
        
    }
    else
    {
        printf("Not Divisible by 5 and 3");
    }

    return 0;
}

// lets see a dry run 
// let  x = 5 then not divisible 5 and 3 
// let x = 3 not divisible by 5 and 3 
// let x = 15 divisible by 5 and 3