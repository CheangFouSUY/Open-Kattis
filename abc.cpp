#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int arr[3];
    int mini = 100, maxi = 0, mid;
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }

    for (int i = 0; i < 3; i++){
        if (arr[i] != maxi && arr[i] != mini)
            mid = arr[i];
    }

    string a;
    cin >> a;
    for (int i = 0; i < 3; i++){
        if (a[i] == 'A')
            cout << mini;
        else if (a[i] == 'B')
            cout << mid;
        else
            cout << maxi;

        cout << (i ==  2 ? "" : " ");
    }


    return 0;
}
