
#include <iostream>
#include <string>
using namespace std;

int calculateTotal(int marks[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total;
}

int main()
{
    string name;
    int marks[5];

    cout << "Enter student name: ";
    cin >> name;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    int total = calculateTotal(marks, 5);

    cout << "\nStudent Name: " << name << endl;
    cout << "Subject Marks: ";

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << total / 5.0 << endl;

    return 0;
}
