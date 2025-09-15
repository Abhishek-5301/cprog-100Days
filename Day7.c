// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
// #include <stdio.h>
// int main(){
//     int year;
//     printf("Enter the year: ");
//     scanf("%d", &year);

//     if ( year % 4 == 0)
//     { printf ("Leap Year");}
//     else{
//         printf("Not a Leap year");
//     }
//     return 0;
// }

// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
#include <math.h>
int main(){
    char x;
    printf("Enter alphabet: ");
    scanf("%c", &x);

    if( x == 'a'|| x ==  'e' || x == 'i' || x == 'o' ||  x =='u'){
        printf("The char is vowel");
        
    }
    else{
        printf(" The char is consonant");
    }
    return 0;
}