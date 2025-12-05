#include <stdio.h>
int main(){
    char ch[] = "code";
    for( int i = 0; ch[i] != '\0'; i++){
        printf("%c", ch[i]);
    }
    return 0;
}