#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // return inches converted to centimeters.
    return inches * 2.54;
}

double centimetersToInches(double centimeters) {
    // return centimeters converted to inches.
    return centimeters / 2.54;
}

double poundsToKilograms(double pounds) {
    // return pounds converted to kilograms.
    return pounds / 2.20462;
}

double kilogramsToPounds(double kilograms) {
    // return kilograms converted to pounds.
    return kilograms * 2.20462;
}

double fahrenheitToCelsius(double fahrenheit) {
    // return Fahrenheit converted to Celsius.
    return (fahrenheit - 32.0) * (5.0/9.0);
}

double celsiusToFahrenheit(double celsius) {
    // return Celsius converted to Fahrenheit.
    return (celsius * (9.0/5.0)) + 32.0;
}

bool isValidMenuChoice(int choice) {
    // TODO: return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    return (choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT);
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // TODO: return true for choices 1 through 4.
    return (choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS);
}

bool isValidValueForChoice(int choice, double value) {
    // TODO:
    // 1. Invalid menu choices should return false.
    // 2. Length and weight conversions should reject negative values.
    // 3. Temperature conversions should allow negative values.
    
if (!isValidMenuChoice(choice)) {
        return false;
    }

    // Reject negative for certain operations
    if (requiresNonNegativeValue(choice) && value < 0) {
        return false;
    }

    return true;
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
