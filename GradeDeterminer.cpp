#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable declaration
    string name, subject;
    float score;

    // Prompt user for name
    cout << "Enter the full name of the student: ";
    getline(cin, name);
    // Prompt user for subject
    cout << "Enter the subject of the student: ";
    getline(cin, subject);
    // Prompt user for score
    cout << "Enter the score of the student: ";
    cin >> score;

    // Conditional structure to check score
    if (score >= 70 && score <= 100)
    {
        cout << "Student name:" << name << " Subject: " << subject << " Grade: A" << endl;
    }
    else if (score >= 60)
    {
        cout << "Student name:" << name << " Subject: " << subject << " Grade: B" << endl;
    }
    else if (score >= 50)
    {
        cout << "Student name:" << name << " Subject: " << subject << " Grade: C" << endl;
    }
    else if (score >= 40)
    {
        cout << "Student name:" << name << " Subject: " << subject << " Grade: D" << endl;
    }
    else if (score >= 0)
    {
        cout << "Student name:" << name << " Subject: " << subject << " Grade: F" << endl;
    }
    else
    {
        cout << "Invalid score entered." << endl;
    }