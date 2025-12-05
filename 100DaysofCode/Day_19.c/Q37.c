//  //Q Write a prgram t dint he LCM of two numbers.
 #include <stdio.h>
 int main(){
    int a, b, LCM = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for( int i = 1; i  <= (a < b ? a : b); i++){
        if( a % i == 0 && b % i == 0 ){
            LCM = LCM * i;
            a = a / i;
            b = b/ i;
        }
    }
    printf("LCM : %d", LCM);
    return 0;
 }

 