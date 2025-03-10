#include <vector>
#include <ctime>
#include "read_file.hpp"

//extern std::string secret_word;
//extern std::vector<char> wrong_guesses; // Give us a dinamic vector

std::string choose_word()
{
    std::vector<std::string> words = read_file();

    srand(time(NULL));
    int rand_index = rand() % words.size();

    return words[rand_index];
}