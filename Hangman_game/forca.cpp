#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "add_word.hpp"
#include "choose_word.hpp"
#include "exist_letter.hpp"
#include "guess.hpp"
#include "not_right.hpp"
#include "print_errors.hpp"
#include "print_letters.hpp"
#include "print_welcome.hpp"
#include "read_file.hpp"
#include "save_file.hpp"
using namespace std; //Namespace is a declarative region that provides a scope to the identifiers
                    // Using namespace in a hpp, can delimit the uses of the functions, for example, if we want to create
                    //      a cout function

static string secret_word; // String is a variable to store more that one letter, the same as char *
static map<char, bool> guessed;
// This will create a char *, which will have a bool value, for example:
// guessed['M'] = false;
// guessed['E'] = false;
// guessed['L'] = false;
// guessed['O'] = false;
// guessed['N'] = false;
static std::vector<char> wrong_guesses; // As a static vairable, you only can use that variable in this file

int *function() // Testing the use of pointers
{
    int *j = new int; // This will create a pointer to an integer in the heap, just like as malloc
    *j = 5;

    return j;
}

int main()
{ 
    #if 0
    int *i;
    i = function();

    cout << i << endl;

    delete i; // This will delete the pointer in the heap, just like free()
    #endif
    #if 1 // We are ignoring the code below if '0', if '1' we will execute the code below
    print_welcome();
    
    secret_word = choose_word();
    //cout << secret_word << endl; // Prints the secret_word

    while(not_right(secret_word, guessed) && wrong_guesses.size() < 5)
    {
        better_forca::print_errors(wrong_guesses); //Using namespace to avoid conflicts with other functions with the same name

        print_letters(secret_word, guessed);
        
        guess(guessed, wrong_guesses, secret_word);
    }

    cout << "End of the Game!" << endl;
    cout << "The secret word was: " << secret_word << endl;
    if (not_right(secret_word, guessed))
    {
        cout << "Try again! ... You lost :(" << endl;
    }
    else
    {
        cout << "Congratulations!!! You won" << endl;
        
        cout << "Do you wan to add a new word to the dictionary? (S/N)" << endl;
        char awnser;
        cin >> awnser;
        if (awnser == 'S')
        {
            add_word();
        }
    }
    #endif
}

// Compilation phases
// Pre-processor compilation -- translation Unit -- Link all the information
//
//
//
// Pre-processor compilation --> Will read headers.
// Translation Unit --> Gets the information from Headers
// Link --> Gather all the objects and returns the executable.

// USES OF NAMESPACE
//
// namespace test{
//    namespace test1{
//          namespace test2{
//          }    
//    }
// }
//
// test::test1::test2::function();
//
// If we have a big namespace, we can just use:
// namespace t = test::test1::test2;
