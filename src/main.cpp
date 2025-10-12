#include <iostream>    // For standard input/output
#include "hello.h"     // Declares getMessage()
#include "utils.h"     // Declares add() and greet()

int main() {
    // Print the message from hello.cpp
    std::cout << "Message: " << getMessage() << std::endl;

    // Demonstrate a simple addition using utils.cpp
    int a = 5, b = 7;
    std::cout << "Addition of " << a << " + " << b << " = " << add(a, b) << std::endl;

    // Call greet() function
    greet();

    std::cout << "Program executed successfully!" << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
