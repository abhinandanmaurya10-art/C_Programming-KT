#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);

    // for(i = 1; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    // in reverse:

    // for(i = n; i >= 1; i--)
    // {
    //     printf("%d\n", i);

    // for even printing 

    
    for(i = 1; i <= n; i++)
    {
        if(i%2==0){
        printf("%d\n", i);
    }
    }
    return 0;
}