#include<stdio.h>

int main() {

    int n, temp, digit;   // n = original number, temp = n ka copy, digit = last digit
    int sum = 0;          // sum = digits ke cubes ka total

    // User se number input lena
    printf("Enter the Number: ");
    scanf("%d", &n);

    // Original number ko temp me store karna
    temp = n;

    // Jab tak temp 0 na ho, tab tak loop chalega
    while(temp != 0) {

        digit = temp % 10;              // Last digit nikalna
        sum = sum + (digit * digit * digit); // Digit ka cube sum me add karna
        temp = temp / 10;               // Last digit hata dena
    }

    // Check karna ki sum original number ke barabar hai ya nahi
    if(sum == n) {
        printf("%d is an Armstrong Number\n", n); // Agar equal ho, Armstrong number
    }
    else {
        printf("%d is not an Armstrong Number\n", n); // Agar equal na ho
    }

    return 0;   // Program end
}
