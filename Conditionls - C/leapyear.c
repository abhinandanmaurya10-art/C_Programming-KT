#include<stdio.h>
int main (){

    int year;
    printf("Enter The Year: ");
    scanf("%d",  &year);

    if(year%400==0 || year%4==0 && year%100!=0){
        printf("Enter year is a leap year ");
    }
    else{
    printf("Not a leap Year");
}

    return 0;
}