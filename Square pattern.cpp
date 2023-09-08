#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int i = 1; // ith row
    while (i <= n)
    {
        int j = 1; // ith row mei jth column;
        while (j <= n)
        {
            cout << n;
            j++;
        }
        i++;
        cout << endl;
    }
}