#include <bits/stdc++.h>

using namespace std;

int main ()
{
    double cost;
    int num;
    cin >> cost >> num;
    double ret = 0;
    double lawn[num][2];
    for (int i = 0; i < num; i++){
        cin >> lawn[i][0] >> lawn[i][1];
        ret += lawn[i][0] * lawn[i][1] * cost;
    }

    cout << fixed << setprecision(7);
    cout << ret;

    return 0;

}
