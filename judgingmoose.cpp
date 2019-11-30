#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "Odd " << a*2;
    else if (a < b)
        cout << "Odd " << b*2;
    else if (a == b && a == 0)
        cout << "Not a moose";
    else
        cout << "Even " << a*2;

    return 0;
}
