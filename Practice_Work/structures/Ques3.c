//Create a structure to store complex numbers.
//USING ARROW OPERATOR. 
#include <stdio.h>
struct complex{
    int real;
    int img;
};

int main(){
    struct complex c1[5];

    for(int i = 0; i<5; i++){
    printf("Enter the complex number %d: ", i + 1);
    scanf("%d %d", &c1[i].real, &c1[i].img);
    }


    struct complex *ptr = c1;

        printf("\nEntered complex numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d + %di\n", ptr[i].real, ptr[i].img);
    }
return 0;
}    