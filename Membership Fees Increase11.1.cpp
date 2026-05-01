/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double fee = 2500, percent = 0.04;
    int year=0;
    
    cout <<"Year: " << year <<"\t Fee: $"<<fee << endl;
    
    while (year <6)
    {
        year++;
        fee = fee + (fee * percent);
        cout <<"Year: " << year <<"\t Fee: $"<<fee << endl;
    }
}
