#include<stdio.h>
int main (){
    int nth;
    printf("Enter No of Term: ");
    scanf("%d", &nth);


// using maths An = a+(n-1)d
// after calculating its 2n-1

    // for(int i = 1; i<=2*nth-1; i=i+2){

// i = 1 jaha se print start karna ho. 
// i = i+2 ye common difference hota hai

//         printf("AP is %d\n", i);
//     }
// }


//  Without maths 
int a = 1;
for(int i = 1; i<=nth; i++){

    printf("%d\n", a);
    a = a+2;
}

}
