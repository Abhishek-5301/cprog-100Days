// Create a sturcture to store vectors. 
//Then make a fucntion to return sum of 2 vectors.

#include <stdio.h>
struct  vector{
    int x;
    int y;
};

void sum (struct vector v1, struct vector v2, struct vector sum_vec);
int main(){
    struct vector v1 = {0};
    struct vector v2 = {0};
    struct vector sum_vec = {0};

    printf("Enter the vector 1:");
    scanf("%d, %d", &v1.x, &v1.y);

    printf("Enter the vector 2:");
    scanf("%d, %d ", &v2.x, &v2.y);

    sum(v1,v2,sum_vec);
    return 0;
}

void sum (struct vector v1, struct vector v2, struct vector sum_vec){
sum_vec.x = v1.x + v2.x;
sum_vec.y = v1.y + v2.y;
printf("Sum of the vector is %di + %dj \n", sum_vec.x, sum_vec.y);
}