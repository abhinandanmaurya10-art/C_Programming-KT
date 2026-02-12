#include<stdio.h>
int main (){
    int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   if(num%5==0 || num%3==0 && num%15!=0){
    printf("Divisible by 5 or 3");
   }

    else{
        printf("Not Divisible by 15");
    }
    return 0;
}