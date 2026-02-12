#include<stdio.h>
int main(){

    int n;
    printf("Enter value : ");
     scanf("%d", &n);

    for(int i = 1; i<=n; i++){    // jo i  hai vo to number tak jayega
                                   // i = row hai 
        for(int j = 1; j<=n+1-i; j++){  // but j kavel i tak hi jayega 
                                   //   j = coloum 
         
          printf("* ");

        }
        printf("\n");
    }
    return 0;
}

     // Logic kaised hua:
// Enter value : 4
//     1 2 3 4  j    i = 1, j = 1 to 4
//   1 * * * *       i = 2, j = 1 to 3
//   2 * * *         i = 3, j = 1 to 2
//   3 * *           i = 4, j = 1 to 1
//   4 * 
//   i              we can say that:
//                  i+j = n+1 
//                  j = n+1-i