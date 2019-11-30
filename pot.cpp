#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int ret[num];
    int res = 0;
    for (int i = 0; i < num; i++){
        cin >> ret[i];
        res += pow(ret[i]/10, ret[i]%10);
    }

    cout << res;
    
    return 0;

}
