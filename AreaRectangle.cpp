#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int length;
    int width;
    string fName, lName;

    // Prompt the user for the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length; // Input the length from the user
    cout << "Enter the width of the rectangle: ";
    cin >> width; // Input the width from the user
    cout << "Enter your first name: ";
    cin >> fName; // Input the first name from the user
    cout << "Enter your last name: ";
    cin >> lName; // Input the last name from the user

    // Calculate the area of the rectangle
    int area = length * width;

    // Output the area of the rectangle
    cout << "___________________________________\n";
    cout << "Hello, " << fName << " " << lName << "!" << endl;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}