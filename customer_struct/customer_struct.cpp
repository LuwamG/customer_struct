

#include <iostream>
using namespace std;
#include "customer_struct.hpp"
#include <cctype> 
//Function to check the characters
bool CustomerNumber::isValid() const {
    if (number.length() != 6) {
        return false; 
    }

    // Checking the first two characters are alphabetic
    for (int i = 0; i < 2; ++i) {
        if (!isalpha(number[i])) {
            return false;
        }
    }

    // Checking the last four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!isdigit(number[i])) {
            return false; 
        }
    }

    return true;
}


