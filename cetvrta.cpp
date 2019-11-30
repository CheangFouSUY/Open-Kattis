#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a[2], b[2], c[2], d[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1];
    if (a[0] == b[0])
        d[0] = c[0];
    else if (a[0] == c[0])
        d[0] = b[0];
    else
        d[0] = a[0];

    if (a[1] == b[1])
        d[1] = c[1];
    else if (a[1] == c[1])
        d[1] = b[1];
    else
        d[1] = a[1];

    cout << d[0] << " " << d[1];

}
