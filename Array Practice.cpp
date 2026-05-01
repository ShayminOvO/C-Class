/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_NUM = 10;
    int number [ARRAY_NUM];
    
    cout << "Please Assign integers for each array." << endl;
    
    for (int i = 0; i < ARRAY_NUM; i++)
    {
        cout << "Enter Array Value " << (i+1) << ": ";
        cin >> number[i];
    }
    
    int lowest = number[0];
    int highest = number[0];
    
    for (int i = 1; i < ARRAY_NUM; i++)
    {
        if (highest < number[i])
        highest = number[i];
    }
    for (int i = 1; i < ARRAY_NUM; i++)
    {
        if (number[i]< lowest)
        lowest = number[i];
    }
    cout << "The Highest number is: " << highest << endl << 
            "The Lowest number is: " << lowest;
}
