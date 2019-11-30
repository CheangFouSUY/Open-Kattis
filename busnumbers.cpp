#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x,y, cnt = 0;
    vector<int> bus;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> y;
        bus.push_back(y);
    }
    sort(bus.begin(), bus.end());

    cout << bus[0];
    for (int i = 1; i < x; i++){
        if (bus[i-1] == bus[i]-1){
            cnt++;
            if (i == x-1 && cnt == 1)
                cout << " " << bus[i];
            else if (i == x-1 && cnt > 1)
                cout << "-" << bus[i];

        }
        else{
            if (cnt == 0)
                cout << " " << bus[i];
            else if (cnt == 1)
                cout << " " << bus[i-1] << " " << bus[i];
            else {
                cout << "-" << bus[i-1] << " " << bus[i];
            }
            cnt = 0;
        }

    }

    return 0;
}
