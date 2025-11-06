// Q .Write a program to check if a number is prime
#include <stdio.h>
#include <math.h>
int main(){
    int x, flag=0, i;
    printf("Enter the number: ");
    scanf("%d", &x);

if ( x <= 1){
    printf("%d is NOT  a prime nyumber \n", x);
    return 0;
}
for ( i =2; i <= sqrt(x); i ++){
    if ( x % i == 0){ 
        flag = 1;
        break;
    }
}
if (flag == 0){
    printf("%d is a PRIME Numeber. \n", x);
}
else{
    printf("%d is NOT a prime number \n", x);
}
return 0;
}