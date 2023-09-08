#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    int l = 1;
    int m = 1;
    int temp;
    for (int i = 1; i <= n - 1; i++)
    {
        temp = l + m;
        l = m;
        m = temp;
    }
    cout << l;
}