#include <stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[90];
};
int main(){
    struct student s1 = {23432, 8.90, "Abhishek"};

    struct student *ptr = &s1;
    printf("Student roll = %d \n", (*ptr).roll);
    return 0; 
}