// //Q Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    digits = (int)log10(num);


    firstDigit = num / pow(10, digits);   
    lastDigit = num % 10;


    if (digits == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    
    middlePart = num % (int)pow(10, digits);   
    middlePart = middlePart / 10;              


    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}

