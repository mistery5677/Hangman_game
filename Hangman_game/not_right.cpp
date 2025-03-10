#include <string>
#include <map>
#include "not_right.hpp"

bool not_right(std::string &secret_word, const std::map<char, bool> &guessed) //This makes easier to compile the program, because we are accessing directly the memmory address
{
    for (char letter : secret_word)
    {
        // if (!guessed[letter])
        //     return true;
        if (guessed.find(letter) == guessed.end() || !guessed.at(letter))
            return true;
    }
    return false;
}