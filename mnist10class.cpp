#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 0; i < 150; i++){
        for (int j = 0; j < 51; j++)
            if (j % 2 == 0)
                cout << 1 << ' ';
            else
                cout << -1 << ' ';
        cout << endl;
    }

    return 0;
}
