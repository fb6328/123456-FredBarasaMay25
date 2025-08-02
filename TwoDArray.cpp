// Simple 2D array example

#include <iostream>

using namespace std;

int main()
{

    int twoDArray[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; // Declare a 2D array with 3 rows and 4 columns
    cout << "Element at twoDArray[1][3]: " << twoDArray[1][3] << endl;   // Accessing the first element
    cout << "Array elements are: " << endl;
    for (int i = 0; i < 3; i++) // Loop through the rows
    {
        for (int j = 0; j < 4; j++) // Loop through the columns
        {
            cout << twoDArray[i][j] << " "; // Print each element
        }
        cout << endl; // New line after each row
    }
}