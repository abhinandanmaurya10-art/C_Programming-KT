// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter value between (1 - 90): ");
//      scanf("%d", &n);

//     for(int i = 65; i<=n; i++){
//         for(int j = 65; j<=n; j++){

//             printf("%c", j);

//         }
//         printf("\n");
//     }
//     return 0;
// }

// Second method using typecasting:

#include<stdio.h>
int main(){

    int n;
    printf("Enter value : ");
     scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
         

            // typecasting int to char
            // printf("%c", (char)(j + 64));   // A = 65 → (1+64)
            printf("%c", j+64);

        }
        printf("\n");
    }
    return 0;
}