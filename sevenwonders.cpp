#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int t = 0, c = 0, g = 0, mini = 25;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'T')
            t++;
        else if (s[i] == 'C')
            c++;
        else
            g++;
    }
    if (t <= c && t <= g)
        mini = t;
    else if (c <= t && c <= g)
        mini = c;
    else if (g <= t && g <= c)
        mini = g;

    cout << pow(t, 2) + pow(g, 2) + pow(c, 2) + mini*7;

    return 0;
}
