// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program multiplies all numbers using a loop


#include <iostream>
#include <string>

main() {
    // This function adds all numbers using a loop

    // variables
    std::string value_1_string;
    int value_1;
    int answer = 1;
    int adder = 0;

    // input
    std::cout << "Input a number of your choice:" << std::endl;
    std::cin >> value_1_string;

    // process and output
    try {
        value_1 = std::stoi(value_1_string);
        do {
            adder = adder + 1;
            answer = answer * adder;
        } while (adder < value_1);
        std::cout << "The product is " << answer << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Please input a valid positive integer" << std::endl;
    }
}
