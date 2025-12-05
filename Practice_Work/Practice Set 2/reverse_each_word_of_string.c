// Input a string and reverse each word individually, but keep the word order same.
#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    int end, start = 0;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str), stdin );

    int len = strlen(str);

    if(str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }
    
    for( int i = 0; i <= len; i++){
        if( str[i] == ' ' || str[i] == '\0'){
            end = i - 1;
        

        while( start < end){
            char temp =  str[start];
            str[start] = str[end];
            str[end] = temp;
            start ++;
            end--;
        }
        start = i + 1;
    }
}
printf("Output : %s \n", str);
return 0;
}