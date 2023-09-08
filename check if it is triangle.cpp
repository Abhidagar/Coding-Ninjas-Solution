#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int x, y, z;
    cin >> x >> y >> z;
    if ((x + y > z) && (y + z > x) && (z + x > y))
    {

        if (x == y && y == z)
        {
            cout << "Equilateral Triangle";
        }
        else if (x == y || y == z || z == x)
        {
            cout << "Isosceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
    else
    {
        cout << "Not a Triangle";
    }
}