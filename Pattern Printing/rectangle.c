#include<stdio.h>

int main (){
    
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int colm;
    printf("Enter number of colums: ");
    scanf("%d", &colm);

    for(int i = 1; i<=rows; i++){
    for(int j = 1; j<=colm; j++){   // nested loop

        printf("*");
    }
    printf("\n");
}
    return 0;
}
