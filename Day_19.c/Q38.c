//Q Write a program to find the sum of digits of a number.
 #include <stdio.h>
 int main(){
    int x, sum = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    original = x;

    while (x != 0){
        remainder = x % 10;
        sum =  sum + remainder;
        x = x / 10;
    }
    printf("The sum of %d: %d",original, sum );

    return 0;
 } 