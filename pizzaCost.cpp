// Copyright (c) Year Tony G All rights reserved.

//

// Created by: Tony G

// Date: 2025-03-04

// Calculates the subtotal and total cost of a pizza

#include <iomanip>
#include <iostream>

int main() {
    // Ask for diameter and display diameter in inches
    float diameter_inch;
    std::cout << "What is the diameter in inches of the pizza you desire?: ";
    std::cin >> diameter_inch;
    std::cout << "Diameter in inches is: " << diameter_inch << std::endl;

    // Calculate and display subtotal
    float subtotal = 4.25 + 1.5 * diameter_inch;
    std::cout << "The subtotal is: $" << std::setprecision(2) << subtotal
    << std::endl;

    // Calculate and display total with tax
    const float HST = 0.13;
    float total = subtotal + (HST * subtotal);
    std::cout << "The total: $" << std::setprecision(2) << total << std::endl;
}
