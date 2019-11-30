#include <bits/stdc++.h>

using namespace std;


int main()
{
    int num;
    cin >> num;
    vector<int> ret;
    while (num != -1){
        int ca[num][2];
        for (int i = 0; i < num; i++){
            cin >> ca[i][0] >> ca[i][1];
        }
        int ans = ca[0][0] * ca[0][1];
        for (int i = 1; i < num; i++){
            ans += ca[i][0] * (ca[i][1] - ca[i-1][1]);
        }
        ret.push_back(ans);
        cin >> num;
    }

    for (int i = 0; i < ret.size(); i++)
        cout << ret[i] << " miles" << endl;


    return 0;
}
