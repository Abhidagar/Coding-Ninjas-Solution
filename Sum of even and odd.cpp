#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r;
    int s1 = 0;
    int s2 = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;

        if (r % 2 == 0)
        {
            s1 = s1 + r;
        }
        else
        {
            s2 = s2 + r;
        }
    }
    cout << s1 << " " << s2;
}