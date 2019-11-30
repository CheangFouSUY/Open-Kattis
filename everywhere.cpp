#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int b, cnt = 0;
    cin >> b;
    int ret[b];
    for (int p = 0; p < b; p++){
        int num;
        cin >> num;
        string city[num];
        for (int i = 0; i < num; i++){
            cin >> city[i];
        }
        int a = sizeof(city)/sizeof(city[0]);
        sort(city, city+a);

        for (int i = 0; i < num-1; i++){
            if (city[i] == city[i+1])
                cnt++;
        }
        ret[p] = num - cnt;
        cnt = 0;
    }
    for (int i = 0; i < b; i++)
        cout << ret[i] << endl;
}
