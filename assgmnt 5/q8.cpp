#include <iostream>

// Function to calculate and print Fibonacci series up to 'n' terms
void printFibonacci(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    std::cout << "Fibonacci Series up to " << n << " terms:" << std::endl;

    for (int i = 1; i <= n; ++i) {
        // Print the current Fibonacci term
        std::cout << firstTerm << " ";

        // Calculate the next Fibonacci term
        nextTerm = firstTerm + secondTerm;

        // Update values for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

int main() {
    // Declare variable to store the number of terms
    int n;

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Print Fibonacci series up to 'n' terms
    printFibonacci(n);

    return 0;
}
