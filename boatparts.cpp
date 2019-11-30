#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    set<string> ret;
    string d[b];
    for (int i = 0; i < b; i++){
        cin >> d[i];
    }
    for (int i = 0; i < b; i++){
        ret.insert(d[i]);
        if (ret.size() == a){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << "paradox avoided" << endl;

    return 0;
}
