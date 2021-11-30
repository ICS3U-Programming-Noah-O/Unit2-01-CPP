// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Date: Nov. 25, 2021
// This program calculates the area and circumference of a circle
// with a radius of 6cm.

#include <iostream>
#include <cmath>

int main() {
  // Calculates the area and circumference of a circle with a radius of 6cm.
  std::cout << "If a circle has a radius of 6cm: " << std::endl;
  std::cout << " " << std::endl;
  std::cout << "The area would be " << (M_PI * pow(6, 2)) << "cm^2 "
            << "and the perimeter would be " << (2 * M_PI * 6) << "cm."
            << std::endl;
}
