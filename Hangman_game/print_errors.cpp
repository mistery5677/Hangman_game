#include <vector>
#include <iostream>

//extern std::vector<char> wrong_guesses; // Give us a dinamic vector

namespace better_forca
{
    void print_errors(const std::vector<char> &wrong_guesses) //As a const, we can't change the value
    {
        std::cout << "Wrong guesses: ";
        for(char letter: wrong_guesses)
        {
            std::cout << letter << " ";
        } 
        std::cout << std::endl;
    }
}