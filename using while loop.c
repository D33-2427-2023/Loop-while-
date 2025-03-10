 /*using while loop
Author:Maxwell Kathurima
Reg No: D33-2427-2023 
*/
#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 100) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}