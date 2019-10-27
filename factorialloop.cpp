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
    int value_1;
    int answer = 1;
    int adder = 0;

    // input
    std::cout << "Input a number of your choice:" << std::endl;
    std::cin >> value_1;

    // process and output
    do {
        adder += 1;
        answer = answer * adder;
    } while (adder < value_1);
    std::cout << "The answer is " << answer << "." << std::endl;
}
