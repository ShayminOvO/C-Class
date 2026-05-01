#include <iostream>
#include<cstdlib>
using namespace std;

//function prototype
void function();

int main()
{
function();

return 0;
}

//void function
void function()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    
    if ( num % 2 == 0)
    {
    cout << num << " is even.";
    }
    else
    {
    cout << num << " is odd.";
    }
    
  exit (0); //ends the program
}
