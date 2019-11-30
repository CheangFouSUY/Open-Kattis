#include <bits/stdc++.h>

using namespace std;

int main()
{

    int num, tb = 0, lr = 0;
    cin >> num;
    string s[num];
    for (int i = 0 ; i < num; i++)
        cin >> s[i];
    for (int i = 0; i < num; i++){
        if (s[i][0] == '0')
            tb++;
        if (s[i][1] == '0')
            tb++;
        if (s[i][2] == '0')
            lr++;
        if (s[i][3] == '0')
            lr++;
    }
    int ret = lr;
    if (tb < lr)
        ret = tb;
    if (ret % 2 != 0)
        ret--;

    cout << ret/2 << " " << tb-ret << " " << lr-ret;

    return 0;
}
