#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, n, e, c;
    cin >> num;
    int ret[num];
    string res[num];
    for (int i = 0; i < num; i++){
        cin >> n >> e >> c;
        if (e-c > n)
            res[i] = "advertise";
        else if (e-c < n)
            res[i] = "do not advertise";
        else
            res[i] = "does not matter";
    }
    for (int i = 0; i < num; i++){
        cout << res[i] << endl;
    }

}
