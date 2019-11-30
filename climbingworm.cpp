#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, h, cnt = 0;
    int des = 0;
    cin >> a >> b >> h;
    while (1){
        des += a;
        cnt++;
        if(des >= h){
            break;
        }
        des -= b;
    }
    cout << cnt;
    return 0;
}
