// Using a loop to create an array, nums that stores 5 integers which are input by the user

#include <iostream>

using namespace std;

int main()
{
    // Declare variable
    int nums[5], sum = 0, product = 1; // Initialize sum and product
    // Input 5 integers from the user
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Integer " << (i + 1) << ": ";
        cin >> nums[i];
        sum = sum + nums[i];         // Assuming you want to sum the integers
        product = product * nums[i]; // If you want to calculate the product, uncomment this line
    }

    // Output the integers stored in the array
    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\nThe sum of the integers is: " << sum << endl;
    cout << "The product of the integers is: " << product << endl;
    cout << "The mean of the integers is: " << static_cast<float>(sum) / 5 << endl;
    return 0;
}