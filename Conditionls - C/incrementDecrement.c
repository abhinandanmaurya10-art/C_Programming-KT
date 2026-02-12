#include<stdio.h>
int main (){
    int x = 6;

    printf("%d\n", x);  //6
    printf("%d\n", x++);  //6
    printf("%d\n", x);  //7
     // x++;   x = x+1;  Postincerement matlab pahle 
    // do the work then incerement

    // now ab x ki value 7 hai
    
    printf("%d\n", x);  
    printf("%d\n", ++x);
    printf("%d\n", x);
//    ++x matalab incerement the value then do the work

    return 0;
}