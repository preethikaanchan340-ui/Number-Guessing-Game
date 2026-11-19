#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int secretNumber, guess;
    int attempts;
    char playAgain;

    srand(time(0));

    do {
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        cout << "\n===== NUMBER GUESSING GAME =====\n";
        cout << "I have selected a number between 1 and 100.\n";
        cout << "Try to guess the number!\n";

        do {
            cout << "\nEnter your guess: ";

            if (!(cin >> guess)) {
                cout << "Invalid input! Please enter a number.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100.\n";
                continue;
            }

            attempts++;

            if (guess > secretNumber) {
                cout << "Too High! Try again.\n";
            }
            else if (guess < secretNumber) {
                cout << "Too Low! Try again.\n";
            }
            else {
                cout << "\nCongratulations! You guessed correctly!\n";
                cout << "The secret number was: " << secretNumber << endl;
                cout << "Total attempts: " << attempts << endl;
            }

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing!\n";

    return 0;
}
