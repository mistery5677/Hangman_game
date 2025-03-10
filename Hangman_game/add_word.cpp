#include <iostream>
#include <string>
#include <vector>
#include "read_file.hpp"
#include "save_file.hpp"

void add_word()
{
    std::cout << "Write the new word in UPPERCASE" << std::endl;
    std::string new_word;
    std::cin >> new_word;

    std::vector<std::string> word_list = read_file();
    word_list.push_back(new_word);

    save_file(word_list);
}