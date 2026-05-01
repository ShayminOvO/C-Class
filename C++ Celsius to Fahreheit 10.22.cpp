#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
 int celsius = 0, num;
 double fahreheit;
 
 cout << "What tempature is it in celsius? ";
 cin >>num;
 
 while (celsius <= num)
    {
    fahreheit =  fahreheit = (1.8*celsius)+32;
    cout << "Celsius:" << celsius << "\t Fahreheit:"<< fahreheit << endl;
    celsius++;
    }
    
 cout <<"The tempature in fahreheit is: " << fixed << setprecision(2) << fahreheit;

return 0;
}