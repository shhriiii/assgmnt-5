#include <iostream>

int main() {
    // Declare variables
    int number, originalNumber, reversedNumber = 0, digit, sum;

    // Prompt the user to enter the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Store the original number
    originalNumber = number;

    // Calculate the reverse of the number
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Append the digit to the reversed number
        number /= 10;  // Remove the last digit
    }

    // Calculate the sum of the original number and its reverse
    sum = originalNumber + reversedNumber;

    // Print the sum
    std::cout << "Sum of " << originalNumber << " and its reverse " << reversedNumber << " is: " << sum << std::endl;

    return 0;
}
