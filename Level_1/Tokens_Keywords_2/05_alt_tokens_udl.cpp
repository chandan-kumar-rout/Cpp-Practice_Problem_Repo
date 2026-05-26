// Q.5. write a c++ program that uses alternative tokens(like and, not, bitand) instead of standard symbols, handles stringizing operator in macros, and implements a custom user-defined literal (udl) to convert distance in kilometers to meters.
#include <iostream>

// 1. Token Concatenation and Stringizing Macros
#define MAKE_VARIABLE(name) int token_##name = 42
#define PRINT_TOKEN(x) std::cout << #x << " equals " << x << std::endl

// 2. User-Defined Literal Operator
// Converts kilometers to meters at compile time
constexpr long double operator"" _km(long double kms) {
    return kms * 1000.0;
}

int main() {
    // Using alternative operator tokens
    bool condition1 = true;
    bool condition2 = false;

    std::cout << "--- Alternative Tokens Output ---" << std::endl;
    if (condition1 and not condition2) {
        std::cout << "Alternative 'and' and 'not' tokens work!" << std::endl;
    }

    int bitwise_result = 5 bitand 3; // Equivalent to: 5 & 3
    std::cout << "Bitwise AND token result: " << bitwise_result << std::endl;

    // Using macro token manipulation
    std::cout << "\n--- Macro Token Manipulation ---" << std::endl;
    MAKE_VARIABLE(test); // Creates token: token_test
    PRINT_TOKEN(token_test);

    // Using User-Defined Literals
    std::cout << "\n--- User-Defined Literal ---" << std::endl;
    long double distance_in_meters = 2.5_km;
    std::cout << "2.5_km in meters: " << distance_in_meters << "m" << std::endl;

    return 0;
}


