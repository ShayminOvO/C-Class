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
   float width1, length1, width2, length2, rArea1, rArea2;
   
   cout << "Please enter the width and length of the First Rectangle.\nWidth: "; 
   cin >> width1;
   cout << "Length: ";
   cin >> length1;
   
   cout << "\nPlease enter the width and length of the Second Rectangle.\nWidth: ";
   cin >> width2;
   cout << "Length: ";
   cin >> length2;
   
   
   rArea1 = width1 * length1;
   rArea2 = width2 * length2;
   
   cout << "Rectangle 1's area: " << setprecision(1) << fixed << rArea1
   << "\nRectangle 2's area: " << rArea2 << endl;
   
   if (rArea1 > rArea2)
        cout << "Rectangle 1 has a larger area than rectangle 2.";
   
   if (rArea1 < rArea2)
        cout << "Rectangle 2 has a larger area than rectangle 1.";
        
   if (rArea1 == rArea2)
        cout << "Both Rectangles have the same area.";
   
    return 0;
}
