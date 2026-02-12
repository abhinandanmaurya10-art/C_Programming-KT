#include<stdio.h>
int main(){
    int nth;
    printf("Enter No of Term: ");
    scanf("%d", &nth);

    int a = 1;
for(int i = 1; i<=nth; i++){

    printf("%d\n", a);
    a = a*2;  // multiple of n a print hoga jisse GP bn jayega
}

}
