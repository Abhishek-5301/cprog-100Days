#include <stdio.h>
int main(){
    int n, element, i, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[ n + 1];

    printf("Enter the %d sorted elements:  \n", n);
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    pos = n;
    for( i = 0; i < n; i++){
        if( arr[i] > element){
            pos = i;
            break;
        }
    }

    for( i = n; i > pos; i--){
        arr[i] = arr[ i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Updated array: ");
    for( i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0; 
}