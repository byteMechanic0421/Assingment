// Q1
/*#include <stdio.h>
int main() {
    int num, sum = 0, temp , digit ;
    printf("enter an integer:");
    scanf("%d",&num);
    temp=num;
    while (temp>0){
        digit=temp%10;
        sum+=digit*digit*digit;
        temp/=10;
    }
    if (sum==num){
        printf("%d is an armstring number.\n",num);

    }
    else{
        printf("%d in not an armstrong number.\n",num);
    }
    return 0;
}
*/

//q2
/*
#include<stdio.h>
int main(){
    int num1,num2,hcf,i;
    printf("enter two integers:");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1 && i<+num2;i++)
    {
        if(num1%1==0 && num2%i==0){
            hcf=i;
            }
    } 
    printf("hcf of %d and %d is %d.\n",num1,num2,hcf);
    return 0;
}
*/



//q3
/*
#include <stdio.h>

int subtract(int a, int b) {
    // Calculate two's complement of b and add it to a
    while (b != 0) {
        // Carry contains common set bits of a and b
        int carry = (~a) & b;
        
        // Subtraction of bits of a and b where at least one of the bits is not set
        a = a ^ b;
        
        // Carry is shifted by one so that subtracting it from a gives the required result
        b = carry << 1;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two integers (a and b) to subtract (a - b): ");
    scanf("%d %d", &a, &b);
    
    int result = subtract(a, b);
    printf("Result of %d - %d is: %d\n", a, b, result);
    
    return 0;
}
*\

// q4

/*

#include <stdio.h>

// Method 1: Using a temporary variable
void swapWithTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic (addition and subtraction)
void swapWithArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using bitwise XOR
void swapWithXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using pointer swapping
void swapWithPointers(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two integers to swap (x and y): ");
    scanf("%d %d", &x, &y);
    
    printf("Original values: x = %d, y = %d\n", x, y);
    
    // Method 1: Temporary variable
    swapWithTemp(&x, &y);
    printf("After swap with temp variable: x = %d, y = %d\n", x, y);
    
    // Re-swap to restore original values
    swapWithTemp(&x, &y);
    
    // Method 2: Arithmetic
    swapWithArithmetic(&x, &y);
    printf("After swap with arithmetic: x = %d, y = %d\n", x, y);
    
    // Re-swap to restore original values
    swapWithArithmetic(&x, &y);
    
    // Method 3: Bitwise XOR
    swapWithXOR(&x, &y);
    printf("After swap with XOR: x = %d, y = %d\n", x, y);
    
    // Re-swap to restore original values
    swapWithXOR(&x, &y);
    
    // Method 4: Pointer swapping (only works when called with pointers to the variables)
    int *px = &x, *py = &y;
    swapWithPointers(&px, &py);
    printf("After swap with pointers: x = %d, y = %d\n", *px, *py);
    
    return 0;
}
*/

//q5
/*
#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    
    // Iterate through all possible divisors from 1 to num/2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Check if the sum of divisors equals the original number
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number to check if it is a Perfect Number: ");
    scanf("%d", &num);
    
    if (isPerfectNumber(num)) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
    
    return 0;
}
*/

// q6
/*#include <stdio.h>

void determineQuadrant(int x, int y) {
    if (x > 0 && y > 0) {
        printf("The coordinate point (%d, %d) lies in the First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%d, %d) lies in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d, %d) lies in the Third Quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The coordinate point (%d, %d) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The coordinate point (%d, %d) lies on the X-axis.\n", x, y);
    } else {
        printf("The coordinate point (%d, %d) is at the Origin.\n", x, y);
    }
}

int main() {
    int x, y;
    printf("Enter the X and Y coordinates: ");
    scanf("%d %d", &x, &y);
    
    determineQuadrant(x, y);
    
    return 0;
}
*/

//q7

/*#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, last_digit;

    while (binary > 0) {
        last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert decimal to binary
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, remainder;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int choice, number;

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("The decimal equivalent is: %d\n", binaryToDecimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("The binary equivalent is: %d\n", decimalToBinary(number));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
*/

//q8

/*#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print '1' if the sum of row and column indexes is odd, otherwise print '0'
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
*/

