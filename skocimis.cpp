#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if (b-a > c-b)
        cout << b-a-1;
    else
        cout << c-b-1;

    return 0;
}
