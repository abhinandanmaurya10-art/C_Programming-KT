#include<stdio.h>
int main(){
    int n;

    printf("Enter Sides of Square: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        int a = 2;
        for(int j = 1; j<=n; j++){   // for triangle put j<=i;
            printf("%d", a);         // ulta karne ke liye j<=n+1-i;
            a = a+2;
        }
        printf("\n");
    }
    return 0;
}