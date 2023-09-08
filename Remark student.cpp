#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    if (n > 75 && n <= 100)
    {
        cout << "Distinction" << endl;
    }
    else if (n > 50 && n <= 75)
    {
        cout << "Average" << endl;
    }
    else if (n > 35 && n < 50)
    {
        cout << "Below Average" << endl;
    }
}