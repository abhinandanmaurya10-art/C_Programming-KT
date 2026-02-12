#include<stdio.h>
int main (){

    int num,ld, rev;
    printf("Enter the Digit: ");
    scanf("%d",  &num);

    rev = 0;
    while(num!=0){  // Loop tb chale jb num zero ke equal nahi hoga.
        
        ld = num%10;  // % karke hum last digit nikate hai

        num = num/10;  // / karke hum last digit ko remove karte hai

        rev = 10*rev;  // shift karte hai digit ko

        rev = (rev+ld); // last digit jo hai usko reverse ke sath add karte hai.
         
     
    }

    printf("%d", rev);
}