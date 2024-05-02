#include <iostream>

double newton_raphson_division(double dividend, double divisor, int max_iterations = 20, double epsilon = 1e-9) {
    double reciprocal_approximation = 1.0 / divisor;
    
    for (int i = 0; i < max_iterations; ++i) {
        double error = (1.0 - divisor * reciprocal_approximation);
        reciprocal_approximation *= (2.0 - divisor * reciprocal_approximation);

        // Check for convergence
        if (std::abs(error) < epsilon) {
            break;
        }
    }

    return dividend * reciprocal_approximation;
}

int main() {
    double dividend = 10000000.0;
    double divisor = 9899999.0;
    
    double quotient = newton_raphson_division(dividend, divisor);

    std::cout << "Dividend: " << dividend << std::endl;
    std::cout << "Divisor: " << divisor << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
