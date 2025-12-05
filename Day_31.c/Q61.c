#include <stdio.h>
int main(){
    int n, search, found;
    printf("Enter the sizze of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: ");
    for ( int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element: ");
    scanf("%d", &search);
    for( int i = 0; i<n; i++){
        if ( search == arr[i]){
            printf("Yes the element exists at %d", i);
            found = 1;
            break;
        }
    }
    if ( found == 0){
        printf("Element does not exist. \n");
    }
    return 0;
}
