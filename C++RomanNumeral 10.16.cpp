#include <iostream>
#include <string>
using namespace std;
int main()
{
 
int num;
cout << "Enter a number between 1-10: ";
    cin >> num;
{
if (num == 1)
    cout << "The roman numeral is I";
else if (num == 2)
    cout << "The roman numeral is II";
else if (num == 3)
    cout << "The roman numeral is III";
else if (num == 4)
    cout << "The roman numeral is IV";
else if (num == 5)
    cout << "The roman numeral is V";  
else if (num == 6)
    cout << "The roman numeral is VI";
else if (num == 7)
    cout << "The roman numeral is VII";
else if (num == 8)
    cout << "The roman numeral is VIII";
else if (num == 9)
    cout << "The roman numeral is IX";
else if (num == 10)
    cout << "The roman numeral is X";
else
    cout << "You did not enter a valid number";
}
return 0;
}