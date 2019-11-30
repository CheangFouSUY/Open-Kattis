#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int h, m;
    cin >> h >> m;

    if (m >= 45)
        cout << h << ' ' <<  m -45;
    else{
        if (h-1 == -1)
            h = 24;
        cout << h-1 << ' ' << m +15;

    }
    return 0;
}
