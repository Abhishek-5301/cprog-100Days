#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    printf("%c",fgetc(fptr));

    fputc('M', fptr);

    fclose(fptr);

    return 0;
}

//EOF = Marks the end of file when all data is read.