#include <iostream>

using namespace std;

int main()
{
    int mark[5] = {19, 13, 5, 26, 4 };
    // Change 4th element to 9
    mark[3] = 9;

    // take input from the user
    cout << "\nThe second digit is: ";
    cin >> mark[2];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nThe marks are: ";
        cout << mark[i] << " ";

    }
}