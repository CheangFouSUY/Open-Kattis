#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << num << ":" << endl;
    int con = (num + 1)/2;
    for (int i = 2; i <= con; i++){
        for (int j = i-1; j <= i; j++){
            int divi = i+j;
            if (num % divi == 0 || (num+j) % divi == 0)
                cout << i << "," << j << endl;
        }
    }

}
