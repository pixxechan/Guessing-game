#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "🎲 Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;

    // Game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "🎉 Correct! You guessed it in " << attempts << " tries.\n";
        }

    } while (guess != secretNumber);

    return 0;
}