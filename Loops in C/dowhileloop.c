#include<stdio.h>
int main (){
    int i = 11;

    do{
        printf("%d", i); // pahle print karega 

        i++;  // phir ++ karega 
    }
    while(i<=10);  // Aur last me condition check karga 

    // isliye do while loop me condition check kiye loop
    // ek baar to chalta hi chalta hai. 
    // is conditiom me yh kavel 11 print karega aur 
    // condition false hone par false ho jayega.
}