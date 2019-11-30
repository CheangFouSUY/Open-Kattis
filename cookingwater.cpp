#include <bits/stdc++.h>

using namespace std;

int main() {
    int times;
    cin >> times;
    int max_start = 0, min_end = INT_MAX;

    while(times--){
        int a, b;
        cin >> a >> b;
        max_start = max(max_start, a);
        min_end = min(min_end, b);
    }
    if(max_start - min_end <= 0){
        cout << "gunilla has a point" << endl;
    } else {
        cout << "edward is right" << endl;
    }

    return 0;
}
