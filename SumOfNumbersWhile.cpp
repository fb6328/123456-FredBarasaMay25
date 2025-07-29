#include <iostream>
using namespace std;

int main()
{
    int number = 20, sum = 0;
    // Loop until the user enters 0
    while (number <= 25)
    {
        sum += number; // Add the number to the sum sum=sum+number;
        number++;      // Increment the number
    }
    cout << "The sum of whole numbers 20-25 = " << sum << endl; // Display final sum
    return 0;
}