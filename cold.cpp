#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, a, cnt = 0;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> a;
        if (a < 0)
            cnt++;
    }
    cout << cnt;

    return 0;
}
