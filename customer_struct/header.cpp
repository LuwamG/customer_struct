#include <iostream>
#include "customer_struct.hpp"
// main to let user create customer number
int main() {
    CustomerNumber customer;

    cout << "Enter your prefered customer number (format: AA1234): ";
    cin >> customer.number;

    if (customer.isValid()) {//check if entered number is valid
        cout << "The customer number is valid." << endl;
    }
    else {
        cout << "The customer number is invalid." << endl;
    }

    return 0;
}
