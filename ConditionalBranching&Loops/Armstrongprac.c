#include <stdio.h>
#include <math.h>

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    int digit = 0; // Fix: Initialize digit
    int n = num;
    int n2 = num;

    while (n != 0) { // Calculates the number of digits
        n /= 10;
        ++digit;
    }

    int result = 0;
    while (n2 > 0) {
        int temp = n2 % 10;
        result += (int)(round(pow(temp, digit)));
        n2 /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
