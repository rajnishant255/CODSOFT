#include <iostream>
#include <cstdlib>  // For srand() and rand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    int number_to_guess = std::rand() % 100 + 1;
    
    int user_guess = 0;
    
    std::cout << "I have generated a number between 1 and 100. Can you guess it?\n";
    
    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;
        
        // Check if the guess is too high, too low, or correct
        if (user_guess < number_to_guess) {
            std::cout << "Too low. Try again.\n";
        } else if (user_guess > number_to_guess) {
            std::cout << "Too high. Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number " << number_to_guess << " correctly.\n";
            break;
        }
    }

    return 0;
}
