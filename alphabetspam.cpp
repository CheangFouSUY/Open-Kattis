#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    double whitespace = 0, symbol = 0, lcase = 0, ucase = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '_')
            whitespace++;
        else {
            if (isupper(s[i]))
                ucase++;
            else if (islower(s[i]))
                lcase++;
            else
                symbol++;
        }
    }

    cout << whitespace/s.size() << endl << lcase/s.size() << endl << ucase/s.size() << endl << symbol/s.size() << endl;

    return 0;
}
