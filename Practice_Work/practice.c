// Write a C program to find the largest of two nu, &mbers using the conditional (ternary) operator.
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a, b, c, temp;
//     printf("Enter first and second number");
//     scanf("%d, %d", &a, &b, &c);

//     if( a >= b && a>=c){
//         printf(" %d is greater than %d", a, b);
//     }

//     else if(b)
   
//     return  0;
// }

//Write a c program to inut two number and find thier sum using the comppund assignment operator. 
// #include <stdio.h>
// #include <math.h>'
// int main(){
//     int a, b, sum;
//     printf( "ENTER TWO NUMBER: ");
//     scanf("%d, %d", &a, &b);

//     a += b;
//     printf("sum: %d", a);
//     return 0;
// }


//LOOP
//PRINT NUMBER TILL N (FOR)
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf ("%d", &n);

//     for( int i = 1; i <=5; i++){
//         printf("%d", i);
//     }
//     return 0;
// }

// While LOOP
// #include <stdio.h>
// int main(){
//     int i =1;
//     while(i<=5){
//         printf("%d \n", i);
//         i ++;
//     }
//     return 0;

// }

// DO WHILE 
// #include <stdio.h>
// int main(){
//     int i = 1;
//     do{
//       printf("%d \n", i);
//       i ++;
//     }while(
//         i <= 5);
// }

#include <stdio.h>
int main(){
    int n, i;
    printf("Enter the number; ");
    scanf("%d", &n);

    for( int i = 1; i <= 10; i ++ ){
        printf( "%d \n", i * n);
    }
    return 0;
}