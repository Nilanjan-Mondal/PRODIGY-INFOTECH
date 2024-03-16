#include <iostream>
#include <iomanip>
using namespace std;

// Function to clear the screen
void clearScreen() {
    cout << "\033[2J\033[H";
}

// Function to display the menu
void displayMenu() {
    cout << "----------------------------------------------" << endl;
    cout << "       Welcome to the Temperature Converter    " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Choose the conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "----------------------------------------------" << endl;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}

int main() {
    char choice;
    double temperature;

    do {
        clearScreen();
        displayMenu();
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Celsius = " << celsiusToFahrenheit(temperature) << " Fahrenheit" << endl;
                break;
            case '2':
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Fahrenheit = " << fahrenheitToCelsius(temperature) << " Celsius" << endl;
                break;
            case '3':
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Celsius = " << celsiusToKelvin(temperature) << " Kelvin" << endl;
                break;
            case '4':
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Kelvin = " << kelvinToCelsius(temperature) << " Celsius" << endl;
                break;
            case '5':
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Fahrenheit = " << fahrenheitToKelvin(temperature) << " Kelvin" << endl;
                break;
            case '6':
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                cout << fixed << setprecision(2) << "Result: " << temperature << " Kelvin = " << kelvinToFahrenheit(temperature) << " Fahrenheit" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number from 1 to 6." << endl;
        }

        cout << "----------------------------------------------" << endl;
        cout << "Do you want to convert another temperature? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the Temperature Converter!" << endl;

    return 0;
}
