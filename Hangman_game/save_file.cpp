#include <vector>
#include <string>
#include <iostream>
#include <fstream>

void save_file(std::vector<std::string> new_list)
{
    std::ofstream file;
    file.open("words.txt");
    if (!file.is_open())
    {
        std::cout << "Couldn't open the dictionary :(" << std::endl;
        exit(0);
    }
    file << new_list.size() << std::endl;
    
    for(std::string word : new_list)
    {
        file << word << std::endl;
    }
    file.close();
}