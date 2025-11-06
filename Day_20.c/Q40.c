//Q Write a program to find the 1's complement of a binary number and print it. 
#include <stdio.h>
int main(){
    long long binary, onescomp =0;
    int place = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary != 0){
        digit = binary % 10;
        if (digit == 0){
            onescomp+=1*place;
        }
        else{
            onescomp+= 0 *place;
        }
        binary /= 10;
        place *= 10;
    }
    return 0; 
}