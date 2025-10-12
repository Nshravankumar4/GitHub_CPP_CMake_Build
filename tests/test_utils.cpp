#include "utils.h"    // Include the header only
#include <cassert>    // For simple testing
#include <iostream>

int main() {
    // Test the add function
    assert(add(2, 3) == 5);
     assert(add(-1, 1) == 0);

   // Call greet (you can just call it, prints output)
    greet();

    std::cout << "Utils All Test Cases passed!\n";
    return 0;
}
