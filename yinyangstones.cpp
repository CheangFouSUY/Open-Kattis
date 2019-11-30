#include <bits/stdc++.h>

using namespace std;

int main()
{
    int bcnt = 0 , wcnt = 0;
    string no;
    cin >> no;
    for (int i = 0; i < no.size(); i++){
        if (no[i] == 'B')
            bcnt++;
        else
            wcnt++;
    }

    cout << (bcnt == wcnt ? "1" : "0");

    return 0;

}
