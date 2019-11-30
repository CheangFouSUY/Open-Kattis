#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, w, h;
    cin >> a >> w >> h;
    int c = sqrt(w*w + h*h);
    string ret[a];
    for (int i = 0; i < a; i++){
        cin >> w;
        if (w <= c)
            ret[i] = "DA";
        else
            ret[i] = "NE";

    }
    for (int i = 0; i < a; i++)
        cout << ret[i] << endl;

}
