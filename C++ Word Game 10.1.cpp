/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, city, age , college, profession, animal, petName;
    
    cout << "What is the name of your character: ";
    cin >> name;
    
    cout << "What is the age of your character: ";
    cin >> age;
    
    cout << "What city do they live in?: ";
    cin >> city;
    
    cout << "What school do they attend?: ";
    cin >> college;
    
    cout << "What is their dream job?: ";
    cin >> profession;
    
    cout << "What kind of pet do they have?: ";
    cin >> animal;
    
    cout << "What is the pet's name?: ";
    cin >> petName;
    
    cout << "\n\n There was once a person named " << name << " who lived in the city of " << city << 
    ". At the age of " << age << " " << name << 
    " went to college at " << college << ". \n" << name << " graduated and went to work as a " << 
    profession << ". Then "<< name << " adopted a(an) " << animal << " named " << petName << " and lived happily ever after.";
}
