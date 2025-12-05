// Write a p[rogram to check whether a number is prime or not. 
#include <stdio.h>
#include <math.h>
int main(){
    int n, prime;
    printf("Enter a number: ");
    scanf("%d", &n);
 prime = 1;
    if(n < 2){
        prime = 0;
    }
        for( int i = 2;  i <= sqrt(n); i++ ){
            if ( n % i == 0){
                prime = 0;
                break;
            }
        }

        if( prime == 1){
            printf("Prime");
        }

        else{
            printf("Non Prime");

            
        }
        
    
   return 0;     

}