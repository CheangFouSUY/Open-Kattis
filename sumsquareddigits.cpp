#include <bits/stdc++.h>

using namespace std;

int base_deci(int deci, int base)
{
    deque<int> ret;
    while (deci > 0){
        ret.push_front(deci%base);
        deci/=base;
    }
    double ans = 0;
    for (int i = 0; i < ret.size(); i++){
        ans += pow(ret[i], 2);
    }
    return ans;
}


int main()
{
    int num;
    cin >> num;
    int base, deci;
    double ret[num];
    for (int i = 0; i < num; i++){
        cin >> base >> base >> deci;
        ret[i] = base_deci(deci, base);
    }
    for (int i = 0; i < num; i++){
        cout << i + 1 << " " << ret[i] << endl;
    }


    return 0;
}
