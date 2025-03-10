#include <iostream>

using namespace std;

void function2()
{
    cout << "Entering function2" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    cout << "Exiting function2" << endl;
}

void function1()
{
    cout << "Entering function1" << endl;
    function2();
    cout << "Exiting function1" << endl;
}

// int main()
// {
//     cout << "Entering main" << endl;
//     function1();
//     cout << "Exiting main" << endl;
//     return 0;
// }