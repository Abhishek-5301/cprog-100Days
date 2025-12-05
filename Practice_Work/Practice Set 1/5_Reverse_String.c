#include <stdio.h>
#include <string.h>
int main(){
  char ch[200];
  scanf("%s", ch);
  int len = strlen(ch); //
 printf("Reversed String: ");
 for( int i = len - 1; i >= 0; i--){
    printf("%c", ch[i]);
 }
  return 0;
}

// if want to do the same with sentence with spaces. 
//   if (ch[len - 1] == '\n') {
 //       ch[len - 1] = '\0';
//        len--;
 //   }