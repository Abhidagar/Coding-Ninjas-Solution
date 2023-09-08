
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++)
    {

        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}