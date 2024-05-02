#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: " << std::flush;

    // Read the input from the user
    std::cin >> number;

    // Display the number entered by the user
    std::cout << "You entered: " << number << std::endl;

    return 0;
}
