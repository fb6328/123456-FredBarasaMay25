#include <iostream>
using namespace std;

int main()
{
    int age;
    string interest;
    // Prompt user for age
    cout << "Enter your age: ";
    cin >> age;
    // Prompt user for interest
    cout << "Enter your interest (soccer/art): ";
    cin >> interest;

    // Conditional structure to check age
    if (age >= 4 && age <= 10)
    {
        // cout << "Admitted. Proceed to Registration" << endl;
        if (interest == "soccer")
        {
            cout << "Assigned to play Group" << endl;
        }
        if (interest == "art")
        {
            cout << "Assigned to art Group" << endl;
        }
        else
        {
            cout << "Assigned to other Group" << endl;
        }
    }
    else
    {

        cout << "Invalid Output." << endl;
    }

    // TERNARY OPERATOR
    cout << (age >= 4 ? "Admitted. Proceed to Registration" : "Declined. Minimum age not reached.") << endl;
}
