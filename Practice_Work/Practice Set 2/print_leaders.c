// Element is leader if it is greater than all elements on right side)
#include <stdio.h>

int main(){
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];   // ✅ Correct place to declare array

    printf("Enter %d elements of array: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Leaders of array: ");

    for(int i = 0; i < n; i++){
        int leader = 1;   // ✅ Assume it's a leader

        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){
                leader = 0;   // ❌ Not a leader
                break;
            }
        }

        if(leader == 1){
            printf("%d ", arr[i]);   // ✅ Print only once
        }
    }

    return 0;
}