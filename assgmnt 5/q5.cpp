#include <iostream>

int main() {
    // Declare variables
    int number, digit, sum = 0;

    // Prompt the user to enter the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Iterate through each digit of the number
    while (number != 0) {
        // Extract the last digit of the number
        digit = number % 10;

        // Check if the digit is even
        if (digit % 2 == 0) {
            // Add the even digit to the sum
            sum += digit;
        }

        // Remove the last digit from the number
        number /= 10;
    }

    // Print the sum of all the even digits
    std::cout << "Sum of all the even digits: " << sum << std::endl;

    return 0;
}
