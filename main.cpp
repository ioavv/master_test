#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Add: " << calc.add(3, 4) << "\n";
    std::cout << "Subtract: " << calc.subtract(4, 5) << "\n";
    std::cout << "Multiply: " << calc.multiply(3, 4) << "\n";
    std::cout << "Divide: " << calc.divide(5, 6) << "\n";
    return 0;
}