#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> repeat;
    vector<string> ans;
    string s;
    while (cin >> s){
        repeat.insert(s);
        ans.push_back(s);
    }

    if (ans.size() > repeat.size())
        cout << "no";
    else
        cout << "yes";

    return 0;
}
