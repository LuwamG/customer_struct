

#include <iostream>
using namespace std;
#include "customer_struct.hpp"
#include <cctype> 
//Function to check the characters
bool CustomerNumber::isValid() const {
    if (number.length() != 6) {
        return false; // Length must be exactly 6
    }

    // Checking the first two characters are alphabetic
    for (int i = 0; i < 2; ++i) {
        if (!std::isalpha(number[i])) {
            return false;
        }
    }

    // Checking the last four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!std::isdigit(number[i])) {
            return false; // Not a digit
        }
    }

    return true;
}


