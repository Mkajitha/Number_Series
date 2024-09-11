#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int isPrimeDigit(int digit) {
    if (digit < 2) 
        return 0;
    if (digit == 2 || digit == 3 || digit == 5 || digit == 7) 
        return 1;
    return 0;
}
int sumOfPrimeDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (isPrimeDigit(digit)) {
            sum =sum+digit; 
        }
        n =n/10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    int result=sumOfPrimeDigits(n);
    printf("%d",result);
    return 0;
}
