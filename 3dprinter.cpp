#include <bits/stdc++.h>

using namespace std;


int main()
{
    int num, cnt = 0;
    cin >> num;

    if (num == 1){
        cout << 1 << endl;
        return 0;
    }

    for (int i = 1; cnt <= num; i*=2, cnt++){
        if (num <= i){
            cnt++;
            break;
        }

    }
    cout << cnt;
    return 0;
}
