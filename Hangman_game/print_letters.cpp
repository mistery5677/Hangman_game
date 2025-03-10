
#include "print_letters.hpp"

// extern std::string secret_word;
// extern std::map<char,bool> guessed;

void print_letters(std::string &secret_word, const std::map<char,bool> &guessed)
{
    for (char letter : secret_word)
    {
        // if (guessed[letter])
        // {
        //     std::cout << letter << " ";
        // }
        if (guessed.find(letter) != guessed.end())
        {
            std::cout << letter << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}