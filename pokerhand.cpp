#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<string> hand;
    for (int i = 0; i < 5; i++){
        cin >> s;
        hand.push_back(s);
    }
    sort(hand.begin(), hand.end());
    int cnt = 1;
    int maxi = 0;
    for (int i = 1; i < hand.size(); i++){
        if (hand[i][0] == hand[i-1][0])
            cnt++;
        else
            cnt = 1;
        if (maxi < cnt)
            maxi = cnt;
    }
    cout << maxi;

    return 0;
}
