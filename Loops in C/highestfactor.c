#include<stdio.h>
int main (){

    int n;
   printf("Enter any number: ");
   scanf("%d", &n);

//    int hf;
//    for(int i = 1; i<n; i++){
//     if(n%i==0)  hf =i;
//    }
//     printf("Highest Factor is:%d\n", hf);

// Lekin isme bahut jyada time lgega:
// time km karne ke liye hum ulta loop chlange:

// }

// lets see:

 int hf = 1;
   for(int i=n-1; i>=1; i--){ //ulta loop isme hum pichhe se check kar rahe hai.
    if(n%i==0){   // ya hum n-1 ki jagah n/2 se bhi start kar sakte hai
        // kyuki kisi v number ka highest factor n/2 ya usse chhota hi hota hai.
    
    hf =i;
    break;
}
   }

    printf("Highest Factor is:%d\n", hf);


}
