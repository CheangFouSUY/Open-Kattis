#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string s[num][2];
    for (int i = 0; i < num; i++){
        cin >> s[i][0] >> s[i][1];
    }

    for (int i = 0; i < num; i++){
            cout << s[i][0] << endl << s[i][1] << endl;
        for (int z = 0; z < s[i][0].size(); z++){
            if (s[i][0][z] == s[i][1][z])
                cout << ".";
            else
                cout << "*";
        }
        cout << endl << endl;
    }


    return 0;
}
