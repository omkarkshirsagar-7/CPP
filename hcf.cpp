#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a << "\n";
    return 0;
}