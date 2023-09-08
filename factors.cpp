#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int i;
    bool f = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = false;
            cout << i << " ";
        }
    }
    if (f)
    {
        cout << "-1";
    }
}