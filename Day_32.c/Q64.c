// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <string.h>

int main(){
    char num[100];
    int freq[10] = {0};
    int maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer: ");
    scanf("%s", num);

    for ( int i = 0; i < strlen(num); i++){
        int digit = num[i] - '0';
        freq[digit]++;
    }

    for ( int i = 0; i< 10; i++){
        if( freq[i] > maxFreq){
            maxFreq = freq[i];
            mostFreqDigit = i;
    }
}

printf("Digit with maximum occerence: %d \n", mostFreqDigit);  
return 0;
}