//              NOTES
//Execution always start from main.
//A fucntion calls get directly or indirectly. 
// There can be multiple function in a program

#include  <stdio.h>
void printHello();
void printbye();
int main(){
printbye();
printHello();    
return 0;
}

void printHello(){
    printf("Hello \n");
}

void printbye(){
    printf("Good bye \n");
}