#include<stdio.h>
int main (){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    
    for(int i = 1; i<=n; i++){
      for(int j = 1; j<=n; j++){


        printf("%d", j);   // output = let n =3
                          //  1 2 3 
                            // 1 2 3 
                          // 1 2 3  
     // printf("%d", i);  // output = let n = 3
                         // 1 1 1
                         // 2 2 2 
                          // 3 3 3   
        
    }
    printf("\n");
}
    return 0;

}