//Q26: Write a program to print numbers from 1 to n.



#include <stdio.h>
int main(){
    int n, i;
    printf("ENTER N : ");
    scanf("%d", &n);

    for( int i =1; i <= n; i ++ ){
        printf("%d \n", i);
    }
    return 0; 
}