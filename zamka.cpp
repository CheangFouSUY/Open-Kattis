#include <bits/stdc++.h>

using namespace std;


int main()
{
    int l, d, x, digit, temp;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++){
        digit = 0;
        temp = i;
        while (temp > 0){
            digit += temp%10;
            temp = temp / 10;
        }
        if (digit == x){
            cout << i << endl;
            break;
        }
    }

    for (int i = d; i >= l; i--){
        digit = 0;
        temp = i;
        while (temp > 0){
            digit += temp%10;
            temp = temp / 10;
        }
        if (digit == x){
            cout << i << endl;
            break;
        }
    }


    return 0;
}
