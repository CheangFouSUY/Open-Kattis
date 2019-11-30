#include <bits/stdc++.h>

using namespace std;

int main()
{
    double w;
    int num;
    cin >> w >> num;
    double wl[num][2];
    double ret = 0;
    for (int i = 0; i < num; i++){
        cin >> wl[i][0] >> wl[i][1];
        ret += wl[i][0] * wl[i][1];
    }
    cout << fixed << setprecision(0);
    cout << ret/w;
    return 0;
}
