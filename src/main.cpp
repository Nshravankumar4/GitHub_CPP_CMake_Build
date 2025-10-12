#include <iostream>     // Include the standard input/output stream library for printing to console
#include "hello.h"      // Include the header file for hello.cpp, which declares the getMessage() function

int main() {
    // Print the message returned by getMessage() to the console
    std::cout << "Message: " << getMessage() << std::endl;

    // Return 0 to indicate that the program executed successfully
    return 0;
}
