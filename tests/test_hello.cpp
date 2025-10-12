
#include <iostream>
#include "../include/hello.h"  // Include the header for getMessage()

int main() {
    std::string msg = getMessage();

    if (msg == "Hello from CI/CD C++ project!") {
        std::cout << "Test Passed!" << std::endl;
        return 0; // success
    } else {
        std::cout << "Test Failed!" << std::endl;
        return 1; // failure
    }
}
