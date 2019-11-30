#include <bits/stdc++.h>

using namespace std;

int main()
{

    double x1, x2, y1, y2, p;
    cin >> x1;
    vector<double> ans;
    while (x1 != 0){
        cin >> y1 >> x2 >> y2 >> p;
        ans.push_back(pow((pow(abs(x1-x2),p) + pow(abs(y1-y2),p)), 1/p));
        cin >> x1;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << fixed << setprecision(7) << ans[i] << endl;

    return 0;
}
