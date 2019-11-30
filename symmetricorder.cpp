#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int cnt = 1;
    int num;
    vector <int> track;
    vector <string> ans;
    cin >> num;
    while (num != 0){
        track.push_back(num);
        string s[num];

        for (int i = 0; i < num; i++){
            cin >> s[i];
        }
        for (int i = 0; i < num; i+=2){
            ans.push_back(s[i]);
        }
        int second;
        if (num%2 ==0)
            second = num-1;
        else
            second = num-2;

        for (int i = second; i > 0; i-=2){
            ans.push_back(s[i]);
        }


        cin >> num;
    }

    int i = 0;
    for (int j = 1; j < track.size(); j++){
        track[j] = track[j] + track[j-1];
    }


    while (cnt <= track.size()){
        cout << "SET " << cnt << endl;
        for(; i < track[cnt-1]; i++){
            cout << ans[i] << endl;
            }
        cnt++;

    }



    return 0;
}
