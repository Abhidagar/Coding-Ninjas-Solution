#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    int bs;
    char gr;
    cin >> bs;
    cin >> gr;
    double hra = 0.2 * bs;
    double da = 0.5 * bs;
    double pf = 0.11 * bs;
    double allow;
    if (gr == 'A')
    {
        allow = 1700;
    }
    else if (gr == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    double ts = bs + hra + da + allow - pf;
    int ans = round(ts);
    cout << ans << endl;
}
