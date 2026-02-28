#include <stdio.h>

// Function to calculate factorial
int factorial(int n){
    int result = 1;

    for(int i = 1; i <= n; i++){
        result = result * i;
    }

    return result;
}

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d = %d\n", number, factorial(number));

    return 0;
}
