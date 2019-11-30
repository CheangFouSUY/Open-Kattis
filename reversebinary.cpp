#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string ret;

    int i = 0;
    while (num > 0){
        if (num%2 == 0)
            ret += 48;
        else
            ret += 49;

        num/=2;
        i++;
    }

    int ans = 0, tmp;
    for (int i = ret.size()-1, po = 0; i >= 0; i--, po++){
        if (ret[i] == '1')
            tmp = 1;
        else
            tmp = 0;
        ans += tmp * pow(2,po);
    }
    cout << ans;

    return 0;
}

