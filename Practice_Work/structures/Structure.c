// #include <stdio.h>
// #include <string.h>
// struct student{
//     char name[100];
//     int roll;
//     float CGPA;
// }; // STATMENT TERMINATOR 
// int main(){
// struct student s1;
// s1.CGPA = 7.7;
// s1.roll = 28957;
// strcpy(s1.name, "Abhishek");

// printf("Name = %s \n Roll = %d \n CGPA = %f \n", s1.name, s1.roll, s1.CGPA);
// return 0;
// }

#include <stdio.h>
#include <string.h>
struct student{
    char Name[100];
    int roll;
    float CGPA;
};
int main(){
struct student s1;
s1.roll = 28957;
s1.CGPA = 9.10;
strcpy(s1.Name, "Abhishek");

printf("Name of student: %s", s1.Name);
return 0;
}