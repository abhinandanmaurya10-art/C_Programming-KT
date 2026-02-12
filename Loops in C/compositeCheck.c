#include <stdio.h>
int main (){

    int n;
    printf("Enter your Choice: ");
    scanf("%d", &n);

    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
        printf("Composite: %d\n", n);
        break;
        }
}
}