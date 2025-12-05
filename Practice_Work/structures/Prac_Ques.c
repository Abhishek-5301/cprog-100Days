#include<stdio.h>
struct rectangle{
    float length;
    float breadth;
    float Area;
};
int main(){
    struct rectangle r1;

    printf("Enter the length of rectangle: ");
    scanf("%f", &r1.length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f",&r1.breadth);

    r1.Area = r1.length * r1.breadth;

    printf("Lengt:%.2f \n", r1.length);
    printf("breadth:%.2f \n", r1.breadth);
    printf("Area:%.2f \n", r1.Area);
    
    return 0;
}
