// #include<stdio.h>
// int main (){

//     for(int i = 19; i<=190; i++){  // i= i+19
//         if(i%19==0){
//             printf("Table of 19 is =%d\n", i);
//         }
//     }
// }

// method 2nd 

#include <stdio.h>

int main() {

    int n, i;

    printf("Enter Number for Table: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) { 

        int mult = n*i;

        printf("%d X %d = %d\n", n, i, mult);
    }

    return 0;
}


