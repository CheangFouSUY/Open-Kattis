#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin >> n;
    double ret[n], tp;
    for (int i = 0; i < n; i++){
        cin >> tp;
        ret[i] = tp/400;
    }
    for (int i = 0; i < n; i++)
        cout << ceil(ret[i])<< endl;

    return 0;
}
