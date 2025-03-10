#include <iostream>

// Inline will say to processor that he can copy and paste this code in the place where it is called 
inline void print_welcome()
{
    std::cout << "****************" << std::endl;
    std::cout << "* GAME STARTED *" << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << std::endl;
}