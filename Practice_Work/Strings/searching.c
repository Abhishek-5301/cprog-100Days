#include <stdio.h>
int find_char(char s[], char ch){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ch) return i;
    }
    return -1;
}

int main(){
char string[] = "Abishek";
char ch;
printf("enter the variable to search: ");
scanf(" %c", &ch);

int index = find_char(string, ch);

if( index == -1){
    printf("character not found");
}
else{
    printf("character found at %d", index);
}
return 0;

}