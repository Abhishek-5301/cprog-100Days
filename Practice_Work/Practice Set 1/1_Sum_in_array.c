// Write a program to find the sum of all elements in an array. 
#include <stdio.h>
int main(){
    int n;
    int sum = 0;
 int arr[n];
 printf("Enter the size of array:  \n");
 scanf("%d", &n);
 
 printf("Enter the elements of array:  \n");
 for( int i = 0; i < n ; i++){
    scanf("%d", &arr[i]);
 }

 for( int i = 0; i < n ; i++){
    sum += arr[i];
 }

 printf("The sum of array is %d. \n", sum);
 return 0;
}