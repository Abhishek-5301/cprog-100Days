#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    int num;
    struct student s1;
    s1.roll = 23094823;
    s1.cgpa = 9.00;
    strcpy(s1.name, "Abhishek");

    struct student s2;
    s2.roll = 23094824;
    s2.cgpa = 8.5;
    strcpy(s1.name, "Ram");

    struct student s3;
    s3.roll = 23094825;
    s3.cgpa = 6.90;
    strcpy(s1.name, "Shyam");

    printf 