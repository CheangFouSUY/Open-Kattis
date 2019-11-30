#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int g, s, c;
    cin >> g >> s >> c;
    int val = g*3 + s*2 + c*1;

    if (val > 7)
        cout << "Province or Gold";
    else if (val > 5)
        cout << "Duchy or Gold";
    else if (val > 4)
        cout << "Duchy or Silver";
    else if (val > 2)
        cout << "Estate or Silver";
    else if (val > 1)
        cout << "Estate or Copper";
    else
        cout << "Copper";




    return 0;

}
