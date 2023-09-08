#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int s, e, w;
    cin >> s >> e >> w;
    int c;
    while (s <= e)
    {
        c = (5 * (s - 32)) / 9;
        cout << s << " " << c << endl;
        s = s + w;
    }
}