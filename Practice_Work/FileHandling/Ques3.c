#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "w");

    if (fptr == NULL) {
        printf("File updation unsuccessful");
        return 1;
    }

    int n, num = 1;
    printf("Enter the number of odd numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fprintf(fptr, "%d number: %d\n", i, num);
        num += 2;
    }

    printf("File update successfully");
    fclose(fptr);
    return 0;
}
