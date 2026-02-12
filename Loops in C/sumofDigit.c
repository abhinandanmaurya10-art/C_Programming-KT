#include<stdio.h>
int main (){
    int num, ld;
     
    printf("Enter A Number: ");
    scanf("%d",  &num);

    int sum = 0;

    while(num>0){
     ld = num%10;  // Last Digit 
    
     
     sum = sum+ld;   // adding to sum
     
    
     num = num/10;  //  remove last 

    }
     
    
     printf("Sum of Digits is %d", sum);
}