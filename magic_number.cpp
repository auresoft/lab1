/////////////////////////////////////////////////////////////////////
//
// Name: <Itzel Sanchez>
// Date: <2/4/2025>
// Class: <CSCI 1470.04>
// Semester: <Spring 2025>
// CSCI 1470 Instructor: <Gustavo Dietrich>
//
// Program Name: Magic Number
// Program Description: Calculate a person's magic number based on
//      their birthday.
//
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <algorithm> // for remove function

int main() {
    std::string birthdate;
    std::cout << "Enter your birthdate (YYYY-MM-DD): ";
    std::cin >> birthdate;

    // Remove dashes from the date string
    birthdate.erase(std::remove(birthdate.begin(), birthdate.end(), '-'), birthdate.end());

    // Sum the digits of the birthdate
    int sum = 0;
    for (char c : birthdate) {
        sum += c - '0';  // Convert char to int and add to sum
    }

    // Calculate the magic number
    while (sum >= 10) {
        int new_sum = 0;
        while (sum > 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
    }

    std::cout << "Your magic number is: " << sum << std::endl;
    return 0;
}
