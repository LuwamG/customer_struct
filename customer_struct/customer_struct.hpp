#ifndef CUSTOMER_STRUCT_HPP
#define CUSTOMER_STRUCT_HPP

#include <string>
using namespace std;
// struct to validate the customer number
struct CustomerNumber {
    string number;

    bool isValid() const;
};

#endif 
