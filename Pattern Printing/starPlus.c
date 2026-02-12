#include<stdio.h>

int main(){

    int n; 
    printf("Enter Value: ");
    scanf("%d", &n);

    int mid = n/2 + 1;   // yaha n ka middle index nikal rahe hain. 
                         // Example: n=5 → mid = 3

    for(int i = 1; i <= n; i++){             // outer loop rows ke liye
        for(int j = 1; j <= n; j++){         // inner loop columns ke liye
   
            // agar row OR column mid ke barabar ho, toh star print hoga
            if(i == mid || j == mid){        
                printf("* ");
            }
            else {
                printf("  ");                // nahi to space print karenge
            }
        }
        printf("\n");                         // har row ke bad new line
    }

    return 0;
}
