//Write a program to print all factors of a given number. 
#include <stdio.h>
int main(){
    int x, n;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    printf("Factors of %d are: ", x);

    for ( int i =1; i <= x; i++){
        if ( x % i == 0){
            printf("%d ", i);
        }
    }
return 0;
}



