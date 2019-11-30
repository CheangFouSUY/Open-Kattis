#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, a;
    double b;
    cin >> num;
    double ret[num][3];
    for (int i = 0; i < num; i++){
        cin >> a >> b;
        ret[i][1] = 60*a/b;
        ret[i][0] = ret[i][1] - 60/b;
        ret[i][2] = ret[i][1] + 60/b;
    }

    for (int i = 0; i < num; i++){
        cout << fixed << setprecision(4);
        cout << ret[i][0] << " " << ret[i][1] << " " << ret[i][2] << endl;
    }
    return 0;

}
