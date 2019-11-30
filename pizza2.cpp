#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sr, br;
    cin >> br >> sr;
    cout << fixed << setprecision(6);
    cout << ((sr-br)*(sr-br))/(br*br)*100;

    return 0;
}
