#include <stdio.h>
typedef struct address{
    int houseno;
    int block;
    char city[90];
    char state[90];
}add;

int main(){
add person1 = {78, 9, "Dehradun", "Uttrakhand"};
add person2 = {79, 9, "Dehradun", "Uttrakhand"};
add person3 = {90, 5, "Delhi", "New Delhi"};
add person4 = {79, 9, "Lucknow", "UP"};
add person5 = {79, 9, "hyderabad", "Telangana"};

printf("Information of Persons: %d,%d,%d,%d,%d", person3.block, person4.block, person2.block,person1.block,person5.block);
return 0;
}
