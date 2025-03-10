#include <iostream>
#include "guess.hpp"
#include "exist_letter.hpp"

// extern std::map<char,bool> guessed;
// extern std::vector<char> wrong_guesses; // Give us a dinamic vector

void guess(std::map<char,bool> &guessed, std::vector<char> &wrong_guesses, std::string secret_word) //This is getting directly the address value
{
    std::cout << "Say your guess: ";
    char guess;
    std::cin >> guess;

    guessed[guess] = true;

    // cout << "Your guess is: " << guess << endl;

    if(exist_letter(guess, secret_word))
    {
        std::cout << "Your guess is in the word!" << std::endl;
    }
    else 
    {
        std::cout << "Your guess is not in the word!" << std::endl;
        wrong_guesses.push_back(guess); // Will add a value to the end of the vector
    }
    std::cout << std::endl;

}