#include <iostream>
#include <cmath>

double calculateDerivative(double coefficient, double exponent, double x) {
    // Applying the power rule to calculate the derivative
    double derivative = coefficient * exponent * pow(x, exponent - 1);
    return derivative;
}

int main() {
    double coefficient, exponent, x;

    // User input
    std::cout << "Enter the coefficient: ";
    std::cin >> coefficient;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Calculating the derivative
    double derivative = calculateDerivative(coefficient, exponent, x);

    // Outputting the derivative
    std::cout << "The derivative at x = " << x << " is: " << derivative << std::endl;

    return 0;
}

