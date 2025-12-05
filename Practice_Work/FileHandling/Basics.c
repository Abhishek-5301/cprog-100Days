#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c", ch);

    fclose(fptr);
    return 0; 
}       

// Reading from a file 
// fscanf(fptr, "%c", &ch);
 