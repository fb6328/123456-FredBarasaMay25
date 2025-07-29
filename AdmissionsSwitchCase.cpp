#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int age;
    char interest;
    // Prompt user for age
    cout << "Enter your age: ";
    cin >> age;

    // Conditional structure to check age
    if (age >= 4 && age <= 10)
    {
        // Prompt user for interest
        cout << "Enter your interest (S for soccer, A for art, T for Toys, M for Music, L for athletics): ";
        cin >> interest;
        // Switch case to determine group assignment based on interest
        switch (interest)
        {
        case 'S':
            cout << "Assigned to the Soccer group." << endl;
            break;
        case 'A':
            cout << "Assigned to the Art group." << endl;
            break;
        case 'T':
            cout << "Assigned to the Toys group." << endl;
            break;
        case 'M':
            cout << "Assigned to the Music group." << endl;
            break;
        case 'L':
            cout << "Assigned to the Athletics group." << endl;
            break;
        default:
            cout << "Assigned to other group." << endl;
        }
    }
    else
    {
        cout << "Invalid age input." << endl;
    }
    return 0;
}