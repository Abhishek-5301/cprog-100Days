// Insert an element in an array at a given postiion. 
#include <stdio.h>
int main(){
    int n, i, element, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the elements of array: ");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the desired postion: ");
    scanf("%d", &pos);

    pos--;

    for( i = n; i>pos; i--){
        arr[i] = arr[ i - 1];
    }

    arr[pos] =  element;
    n++;

    printf("Updated array: \n");
    for(i = 0; i < n ; i++){
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0;
}