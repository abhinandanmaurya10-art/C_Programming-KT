#include<stdio.h>
int main (){
    int num;
    printf("Enter A Number: ");
    scanf("%d", &num);

    // && = And , || = or Stands for logical operaters
     
    if(num>99 && num<1000)
    printf("Three Digit Number");
    else 
    printf("Not a Three Digit Number ");
    
    return 0;
}