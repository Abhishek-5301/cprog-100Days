#include <stdio.h>
int main(){
    char fullname[100];
    scanf("%s", fullname); // string apne aap mai ek pointer hota hai iss liye & lagane ki zarurat nhi.
    printf("your name is %s", fullname);
    return 0;

}
// scanf cannot read multiple words.
