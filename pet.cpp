#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num[5][4], ret[]{0,0,0,0,0};
    int maxi = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j< 4; j++){
            cin >> num[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            ret[i] += num[i][j];
        }
        if (ret[i] > maxi)
            maxi = ret[i];
    }

    for (int i = 0; i < 5; i++){
        if (ret[i] == maxi)
            cout << i+1 << " " << maxi;
    }


    return 0;

}
