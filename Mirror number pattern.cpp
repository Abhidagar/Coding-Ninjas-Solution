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
        while (spaces <= n - i)
        {
            cout << ' ';
            spaces++;
        }
        int star = 1;
        while (star <= i)
        {
            cout << star;
            star++;
        }
        cout << endl;
        i++;
    }
}