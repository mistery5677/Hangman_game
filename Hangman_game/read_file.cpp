#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

std::vector<std::string> read_file()
{
    std::ifstream file;
    file.open("words.txt");

    if (!file.is_open()) // Verify if the file is open
    {
        std::cout << "Couldn't open the dictionary :(" << std::endl;
        exit(0);
    }
    int words;
    file >> words;

    std::cout << "The file has " << words << " words" << std::endl;

    std::vector<std::string> words_file;

    for(int i = 0; i < words; i++)
    {
        std::string readed_word;
        file >> readed_word;
        std::cout << "In line " << i << ": " << readed_word <<  std::endl;
        words_file.push_back(readed_word);
    }

    file.close(); // Close the file 
    return words_file;
}