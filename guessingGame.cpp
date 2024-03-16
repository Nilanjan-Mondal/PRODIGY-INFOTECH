#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber;
    int guess;
    int attempts = 0;
    int bestScore = INT_MAX;
    char playAgain;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        // Generate a random number between 1 and 100
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        cout << "\nI have selected a number between 1 and 100. Try to guess it!" << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You've guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;

                // Update best score
                if (attempts < bestScore) {
                    bestScore = attempts;
                    cout << "New best score: " << bestScore << " attempts!" << endl;
                }

                break;
            } else if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Too high! Try again." << endl;
            }

            // Offer a hint after a certain number of attempts
            if (attempts == 3) {
                cout << "Hint: The number is " << (secretNumber % 2 == 0 ? "even" : "odd") << "." << endl;
            }
        } while (true);

        // Ask if the user wants to play again
        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing! Your best score was: " << bestScore << " attempts." << endl;

    return 0;
}
