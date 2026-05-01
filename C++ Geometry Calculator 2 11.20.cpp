#include <iostream>
#include <iomanip>
using namespace std;

double getCircle();
double getRectangle();
double getTriangle();


int main()
{
int num;
    
 cout << "Geometry calculator \n"
"3. Calculate the Area of a Circle\n"
"2. Calculate the Area of a Rectangle\n"
"3. Calculate the Area of a Triangle \n"
"4. Quit\n\n"
"Enter your choice (1-4): ";
 
cin >> num;

if (num == 1)
    {
    getCircle();
    }

else if (num == 2)
    {
    getRectangle();
    }

else if (num == 3)
    {
    getTriangle();
    }

else if (num ==4)
    {
    cout << "Exiting application.";
    } 
    else 
    {
    cout << "This is not a valid number please try again.";
    }

return 0;
}


double getCircle()
{
    double pi = 3.14159, r, circ;
    
    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    if (r >=0)
        {
        cout << "The Area of your Circle is: " << fixed << setprecision(2) <<pi * (r*r);
        }
        else 
        {
        cout << "Number chosen was a negative please try again.";
        }
    return circ;
}

double getRectangle()
{
    double l, w, rec;
    cout << "Enter the Length: ";
    cin >> l;
    cout << "Enter the Width: ";
    cin >> w;
    
        if (l*w >=0)
        {
        cout << "The Area of your Rectangle is: " << fixed << setprecision(2) << l * w;
        }
 
        else 
        {
        cout << "Number chosen was a negative please try again.";
        }
    return rec;
}

double getTriangle()
{
    double b, h, tri;
    cout << "Enter the Base: ";
    cin >> b; 
    cout << "Enter the Height: ";
    cin >> h;
 
        if (b*h*.5 >=0)
        {
        cout << "The Area of your Triangle is: " << fixed << setprecision(2) << b*h*.5;
        }

        else
        {
        cout << "Number chosen was a negative please try again.";
        }
    return tri;
}
