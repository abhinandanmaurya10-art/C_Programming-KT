#include<stdio.h>
int main (){

    int n;
    printf("Enter Digit: ");
    scanf("%d", &n);
    
   int count = 0;
   
    while(n!=0){
        n = n/10;   // har baar value ko km kar raha hai 
        count++;  // ye har baar count ki value ko update kar raha hai.
       
    }
     printf("Count of Digits is %d \n:", count);
}