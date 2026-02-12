#include<stdio.h>
int main (){

    int rows; 
    printf("Enter 1st row: ");
    scanf("%d", &rows);

        int colm; 
    printf("Enter 2nd colm: ");
    scanf("%d", &colm);

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=colm; j++){

     if(i == 1 || i == rows || j == 1 || j == colm){
        printf("* ");
     }
     else{
        printf("  ");
     }


        }
        printf("\n");
    }
}