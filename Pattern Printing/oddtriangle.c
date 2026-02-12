// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter sides of Triangle: ");
//     scanf("%d", &n);

//     // nested loop

//     for(int i = 1; i<=n; i++){  // rows
//         int a = 1;
//         for(int j = 1; j<=i; j++){  // coloums

//             printf("%d ",  a);
//             a = a+2;

//         }
//         printf("\n");
//     }
//     return 0;

// }

// Ulta number triangle 

#include<stdio.h>
int main(){

    int n;
    printf("Enter sides of Triangle: ");
    scanf("%d", &n);

    // nested loop

    for(int i = 1; i<=n; i++){  // rows
        int a = 1;
        for(int j = 1; j<=n+1-i; j++){  // coloums

            printf("%d ",  a);
            a = a+2;

        }
        printf("\n");
    }
    return 0;

}