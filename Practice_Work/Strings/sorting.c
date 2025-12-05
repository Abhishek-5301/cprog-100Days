#include <stdio.h>
void string_sort(char s[]){
    for( int i = 0; s[i] != '\0'; i++){
        for ( int j = i + 1; s[j] != '\0'; j++){
            if ( s[i] > s[j]){
                char tmp = s[i];
                s[i] = s[j] ;
                s[j] = tmp;
            }
        }
    }
}

int main(){
char string[] = "Abhishek";
string_sort(string);

for( int i = 0; string[i] != '\0'; i++){
    printf("%c", string[i]);
}
return 0;
}