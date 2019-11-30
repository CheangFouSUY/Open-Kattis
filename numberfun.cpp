#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    int num;
    cin >> num;
    string ans[num];
    for (int i = 0; i < num; i++){
        cin >> a >> b >> c;
        if ((a+b==c) || (abs(a-b)==c) || (a*b==c) || (a/b==c) || (b/a==c))
            ans[i] = "Possible";
        else
            ans[i] = "Impossible";
    }
    for (int i = 0; i < num; i++)
        cout << ans[i] << endl;


    return 0;
}
