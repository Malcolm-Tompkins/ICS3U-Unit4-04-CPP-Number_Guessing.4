// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 17, 2021
// Runs the Guess the number game with while loop

#include <stdlib.h>
#include <iostream>
#include <random>
#include <string>

// From https://forums.devx.com/showthread.php?161384-How-to-Clear-Screen-In-C

main() {
    // Function that runs the guess the number game
    int program_number , user_number;
    std::string user_input;
    // User input
    std::cout << "Welcome to Guess the number!";
    // Process
        std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    program_number = idist(rgen);
    while (1 == 1) {
        std::cout<< "\nInput a number from 0-9: ";
        std::cin >> user_input;
        system("clear");
    try {
        user_number = std::stoi(user_input);

        if (user_number == program_number) {
            system("clear");
            std::cout << "Correct!\nYour number was: ";
            std::cout << user_number;
            std::cout << "\nDone.";
            break;
    } else {
        std::cout << "Incorrect, Try again";
        }
    }catch (std::invalid_argument) {
        std::cout << user_input;
        std::cout << " is not an integer";
    }
    }
}
