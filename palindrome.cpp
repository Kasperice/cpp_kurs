#include <iostream>
#include <string>

bool isPalindrome(const std::string & text) {
    int text_length = text.length();
    for (int i = 0; i < text_length/2; i++) {
        if (text[i] != text[text_length-1-i]) return false;
    }
    return true;
}

int main() {
    std::string word;
    std::cout << "Input word to test: ";
    std::cin >> word;
    if (isPalindrome(word)) std::cout << "It is a palindrome!" << std::endl;
    else std::cout << "It is NOT a palindrome"<< std::endl;
}