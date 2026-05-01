/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SALES = 5;
    double number [SALES];
    double total= 0, average;
    cout << "Please Enter the sales value." << endl;
    
    for (int i = 0; i < SALES; i++)
    {
        cout << "Enter Sale " << (i+1) << ": ";
        cin >> number[i];
        total+= number[i];
    }
    
    int highest = number[0];
    
    for (int i = 1; i < SALES; i++)
    {
        if (highest < number[i])
        highest = number[i];
    }
    average = total/SALES;
    
    cout <<"The Sales total: " << fixed << setprecision(2) << total << endl;
    cout << "The Average of the Sales: " << fixed << setprecision(2) << average << endl;
    cout << "The Largest Sale: " << fixed << setprecision(2) << highest << endl;
}
