#include<stdio.h>
int main(){

    int n;
    printf("Enter value : ");
     scanf("%d", &n);

    for(int i = 1; i<=n; i++){    // jo i  hai vo to number tak jayega
                                   // i = row hai 
        for(int j = 1; j<=i; j++){  // but j kavel i tak hi jayega 
                          //   j = coloum 

         if(i%2==0){   // agar i li value odd hoti hai to
             printf("%d", j);  // ye wala part print hoga
         }
         else{    // agar i ki value odd nhi hoti to
            printf("%c", j+64);  // tb ye wala part print hoga.
         }

        }
        printf("\n");
    }
    return 0;
}