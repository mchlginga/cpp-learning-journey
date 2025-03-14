#include <iostream>

int main() {
    int x = 2 * 3;  // Compiler replaces with x = 6 (constant folding)
    if (false) {    // Dead code (eliminated by compiler)
        std::cout << "This will never execute.\n";
    }
    std::cout << "Value of x: " << x << "\n";  // Outputs: Value of x: 6
    return 0;
}