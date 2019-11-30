#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> player;
    int num, mini, lin;
    string name;
    vector<string> ret;
    cin >> num >> mini >> lin;
    for (int i = 0; i < num; i++){
        cin >> name;
        ret.push_back(name);
        player.insert({name, 0});
    }
    string tmp;
    int inin;
    for (int i = 0; i < lin; i++){
        cin >> tmp >> inin;
        map<string, int>::iterator itr = player.find(tmp);
        itr->second = itr->second + inin;
    }
    bool nowinner = true;
    vector<string> ans;
    for (map<string, int>::iterator itr = player.begin(); itr != player.end(); itr++){
        if (itr->second >= mini){
            ans.push_back(itr->first);
            nowinner = false;
        }
    }
    if (nowinner)
        cout << "No winner!";
    else {
        for (int i = 0; i < ret.size(); i++){
            for (int j = 0; j < ans.size(); j++){
                if (ret[i] == ans[j])
                    cout << ret[i] << " wins!\n";
            }
        }
    }



    return 0;
}
