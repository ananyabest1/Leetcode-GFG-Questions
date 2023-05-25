#include <iostream>

bool isPowerOfTwo(int num) {
    if (num <= 0)
        return false;
    return ((num & (num - 1)) == 0);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (isPowerOfTwo(number))
        std::cout << number << " is a power of two." << std::endl;
    else
        std::cout << number << " is not a power of two." << std::endl;
    
    return 0;
}