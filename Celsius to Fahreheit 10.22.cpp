#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
 int n = 0;
 double celsius;
 
 cout << "What tempature is it in celsius? ";
 cin >>celsius;
 
 double fahreheit = (1.8*celsius)+32;
 
 while (n <=celsius)
    {
    cout << n << "\t Celsius:" << celsius << "\t Fahreheit:"<< fahreheit << endl;
    n++;
    }
 cout <<"The tempature in fahreheit is: " << fixed << setprecision(2) << fahreheit;

return 0;
}