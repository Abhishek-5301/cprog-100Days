#include<stdio.h>
struct student{
    int roll_number;
    char name[90];
    float CGPA;
};
int main(){
    struct student ECE[100];
    struct student COE[100];
    struct student IT [100];

    ECE[0].roll_number = 5209; // Acess Syntax
    //ECE[]

}

//  Intialising Structure 
// struct student s1 = { "Abhishek", 1324, 7.9}
// Used for accessing all variable at a time in sturcture.
