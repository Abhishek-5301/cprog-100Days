//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
  int n, i, sum = 0;
  printf("Enter Number: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
  
    sum+=(2*i - 1);
  }
  printf("Sum of %d odd numbers is: %d", n, sum);
  return 0;
}

