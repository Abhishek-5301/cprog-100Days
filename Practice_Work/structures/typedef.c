#include <stdio.h>
typedef struct ComputeEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}coe;           //ALIAS

int main(){
    coe student1 = {242342, 6.8, "Shoyo"};

    printf("Roll number: %d", student1.roll);

    return 0;
}

