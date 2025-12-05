#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("Test.txt", "r");
    int n;
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fscanf(ptr, "%d", &n);
    printf("%d", n);
    fclose(ptr);
    return 0;
}