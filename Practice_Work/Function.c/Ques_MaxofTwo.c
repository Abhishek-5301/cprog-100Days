#include <stdio.h>
int max(int n, int m);
int main(){
int n, m;
printf("Enter two numbers: ");
scanf("%d %d", &n, &m);

max(n, m);
return 0;
}
int max( int n, int m){
    if( n > m){
        printf("%d is greater", n);

    }
    else if(n < m){
         printf("%d is greater", m);
    }

    else{
        printf("Both are equal");
    }

    return 0;
}