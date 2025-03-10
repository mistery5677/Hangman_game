#include <string>
#include <map>

// extern std::string secret_word;

bool exist_letter(char guess, std::string secret_word)
{
    // for(int i = 0; i < secret_word.size(); i++) //secret_word.size will get the word size
    // {
    //     if (guess == secret_word[i])
    //         return true;
    // }
    // Resuming the code above ... NOTE, this syntaxe is from C++11, so to compile is g++ -std=c++111
    for (char letter : secret_word)
    {
        if (guess == letter)
            return true;
    }
    return false;
}