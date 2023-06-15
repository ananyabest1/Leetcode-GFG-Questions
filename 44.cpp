#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string strCopy = str;
    std::transform(strCopy.begin(), strCopy.end(), strCopy.begin(), ::tolower);
    std::string::iterator left = strCopy.begin();
    std::string::iterator right = strCopy.end() - 1;

    while (left < right) {
        if (*left != *right)
            return false;
        ++left;
        --right;
    }

    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if (isPalindrome(str))
        std::cout << "The string is a palindrome." << std::endl;
    else
        std::cout << "The string is not a palindrome." << std::endl;

    return 0;
}