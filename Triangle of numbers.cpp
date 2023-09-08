#include <iostream>
using namespace std;

int main()
{
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= (n - i))
        {
            cout << ' ';
            spaces++;
        }
        int j = 1;
        int p = i;
        while (j <= i)
        {
            cout << p;
            p++;
            j++;
        }
        j = p - 2;
        while (j >= i)
        {
            cout << j;
            j = j - 1;
        }
        cout << endl;
        i++;
    }
}