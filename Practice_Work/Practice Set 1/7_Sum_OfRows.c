//Write a program to find the sum of each row of a matrix.
#include <stdio.h>
int main(){
    int arr[3][3];
    int sum = 0;
   printf("Enter the element : ");
   for ( int i = 0; i < 3; i++){
    for( int j = 0; j < 3; j++){
        scanf("%d", &arr[i] [j]); 
    }
   }
     printf("SUM OF EACH ROW: \n");
   for ( int i = 0; i < 3; i++){
    for( int j = 0; j < 3; j++){
        sum += arr[i][j]; 
    }
    printf("Row of %d = %d \n", i + 1, sum);
    sum = 0;
   }
return 0;
}