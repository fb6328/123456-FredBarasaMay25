#include <iostream>
using namespace std;

int main()
{
    int number = 2000, sum = 0;
    // Loop until the user enters 0
    do
    {
        sum += number; // Add the number to the sum sum=sum+number;
        number++;      // Increment the number
    } while (number <= 25);
    cout << "The sum of whole numbers 20-25 = " << sum << endl; // Display final sum
    return 0;
}