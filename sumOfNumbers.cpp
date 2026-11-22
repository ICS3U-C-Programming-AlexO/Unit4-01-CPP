// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : November 21, 2026
// This program allows the user to enter a positive number.
// It then uses a while loop to add up
// all the whole numbers, starting from 0,
// until that number and display the sum to the user.

#include <iostream>
using namespace std;

int main() {
    int user_num;

    cout << "Enter a positive whole number: ";

    if ((cin >> user_num)) {
        cout << "Please enter a valid whole number." << endl;
        return 0;
    }

    while (user_num <= 0) {
        cout << "Invalid entry. Please enter a positive whole number." << endl;
        cout << "Enter a positive whole number: ";

        if ((cin >> user_num)) {
            cout << "Please enter a valid whole number." << endl;
            return 0;
        }
    }

    int sum = 0;
    int counter = 0;

    while (counter <= user_num) {
        sum = sum + counter;
        counter = counter + 1;
    }

    cout << "The sum of all whole numbers from 0 to "
        << user_num << " is " << sum << endl;
}