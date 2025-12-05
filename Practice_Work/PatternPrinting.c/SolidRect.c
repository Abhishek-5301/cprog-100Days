#include <stdio.h>
int main(){
int len, bre;
printf("Enter length and breadth: ");
scanf("%d %d", &len, &bre);
for( int i = 0; i < len; i++){
    for( int j = 0; j < bre; j++){
        printf("*");
    }
    printf("\n");
    return 0;
}
}