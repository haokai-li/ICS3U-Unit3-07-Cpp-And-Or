// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program is about 'and' and 'or'

#include <iostream>
#include <string>

int main() {
    // This Program is about 'and' and 'or'

    std::string userString;
    int userNumber;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userNumber = std::stoi(userString);
        if (userNumber >= 25 && userNumber <=40) {
            // output
            std::cout << "You are accepted to date my grandchild." << std::endl;
        } else if (userNumber < 25) {
            // output
            std::cout << "You are too young!" << std::endl;
        } else {
            // output
            std::cout << "You are too old!" << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << userString << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
