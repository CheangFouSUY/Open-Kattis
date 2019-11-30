#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int num;
    cin >> num;
    double ca[num][2];
    double ret = 0;
    for (int i = 0; i < num; i++){
        cin >> ca[i][0] >> ca[i][1];
    }
    for (int i = 0; i < num-1; i++){
        ret += (ca[i][1] + ca[i+1][1])/2 * (ca[i+1][0] - ca[i][0]);
    }
    cout << fixed << setprecision(6);
    cout << ret/1000 << endl;
    return 0;
}
