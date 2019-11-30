#include <bits/stdc++.h>

using namespace std;

int main ()
{
    long long x, y;

    cin >> x >> y;

    do{
        cout << abs(x-y) << endl;
    }while (cin >> x >> y);

    return 0;
}
