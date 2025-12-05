// Write a program to read elements of 2D array and find the largest element. 
#include  <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elements of array: ");
    for( int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for ( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 3; j++){
            if(arr[i][j] > largest){
                largest = arr[i][j];
            }
        }
    }

    printf("Largest element = %d \n", largest);
    return 0;
}