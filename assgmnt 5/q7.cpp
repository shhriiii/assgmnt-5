
#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Declare variables
    int n;

    // Prompt the user to enter the value of 'n'
    std::cout << "Enter the value of 'n': ";
    std::cin >> n;

    // Print factorials of the first 'n' numbers
    std::cout << "Factorials of the first " << n << " numbers:" << std::endl;
    for (int i = 1; i <= n; ++i) {
        std::cout << "Factorial of " << i << " = " << factorial(i) << std::endl;
    }

    return 0;
}
