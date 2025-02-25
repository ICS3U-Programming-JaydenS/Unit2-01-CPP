// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: February 24, 2025
// Given user input, Area and Perimeter of rectangle is calculated.

#include <iostream>
#include <cmath>

int main() {
    // I First declare the variables first
    int length;
    int width;

    // then User puts their input
    std::cout << "Enter length of the rectangle (mm): \n"
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): \n"
    std::cin >> width;
    // Code then displays information
    std::cout << "Area is: " << (length*width) << "cm^2\n"
    std::cout << "Perimeter is: " << ((length*2) +(width*2)) << "cm^2\n"
}
