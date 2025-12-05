 #include <stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main(){
    struct student s1 = {1664, 7.8, "Abhishek"};
    printf("Student roll: %d \n", s1.roll);
 
    printinfo(s1); 

    struct student *ptr = &s1;
    printf("Student-> roll = %d \n", ptr->roll); //ARROW OPERATOR (use in pointer for simplyfing code) 
    return 0;
}
void printinfo(struct student s1){
    printf("Student Roll number: %d \n", s1.roll );
}