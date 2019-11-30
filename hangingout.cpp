#include <bits/stdc++.h>

using namespace std;

int main()
{
    int limit, event, cnt = 0, num, curr = 0;
    cin >> limit >> event;
    string tmp;
    int pp[event];
    for (int i = 0; i < event; i++){
        cin >> tmp >> num;
        if (tmp[0] == 'l')
            curr -= num;
        else {
            if (curr + num > limit)
                cnt++;
            else
                curr+=num;
        }

    }

    cout << cnt;


    return 0;

}
