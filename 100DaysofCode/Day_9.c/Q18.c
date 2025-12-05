// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

int main(){
    int marks;
    printf("Enter numbers: ");
    scanf("%d", &marks);

    if(marks >= 50 && marks < 60){
        printf("Your grade is D");
    }
    else if (marks>=60 && marks<70){
        printf("Your grade is C \n");
    }
    else if(marks>=70 && marks<80){
        printf("Your grade is B\n");
    }
    else if(marks>= 80 && marks<100){
        printf("Your grade is A \n");
    }

    else if ( marks< 0 || marks>100){
        printf("Invalid Output");
    }

    return 0;
}