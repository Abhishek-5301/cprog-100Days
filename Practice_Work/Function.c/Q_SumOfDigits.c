#include <stdio.h>
int sumdigits( int  n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of digits is : %d", sumdigits(n));
    return 0;

}
int sumdigits( int n){
    int digit;
    int sum = 0;
    while( n !=0){
        digit = n%10;
        sum = digit + sum;
        n = n / 10;
    }
    return sum;
}