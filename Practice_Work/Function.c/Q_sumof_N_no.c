#include <stdio.h>
int power(int n, int i);
int main(){
int n, i;
printf("Enter the number and power: ");
scanf("%d %d", &n, &i);

printf("Sum of %d natural number is: %d", n, power(n, i));
return 0;
}
int power(int n, int i){
    if(i == 0) return 1;
    return n * power(n, i-1);
}