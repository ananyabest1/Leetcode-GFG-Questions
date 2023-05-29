#include <iostream>

int main() {
    int num1, num2;
    int difference;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    
    difference = num1 - num2;


    std::cout << "The difference between " << num1 << " and " << num2 << " is " << difference << std::endl;

    return 0;
}