#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int c, i;
    int sum = 0;
    int sum1 = 1;
    cin >> c;
    {
        if (c == 1)
        {
            for (int i = 0; i <= n; i++)
            {
                sum = sum + i;
            }
            cout << sum;
        }

        else if (c == 2)
        {
            for (int i = 1; i <= n; i++)
            {
                sum1 = sum1 * i;
            }
            cout << sum1;
        }

        else
        {
            cout << "-1";
        }
    }