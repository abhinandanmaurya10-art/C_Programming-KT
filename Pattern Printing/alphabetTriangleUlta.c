#include<stdio.h>
int main(){

    int n;
    printf("Enter value : ");
     scanf("%d", &n);

    for(int i = 1; i<=n; i++){    // jo i  hai vo to number tak jayega
                                   // i = row hai 
        for(int j = 1; j<=n+1-i; j++){  // but j kavel i tak hi jayega 
                                   //   j = coloum 
         
          printf("%c", j+64);

        }
        printf("\n");
    }
    return 0;
}