//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
int main(){
    int x, y, z, temp;
    x= 1;
    y = 2;
    z= 3;
    temp = x;
    x =y;
    y = z;
    z = temp;
     printf(" vale of %d, %d, %d", x, y, z);
     return 0;