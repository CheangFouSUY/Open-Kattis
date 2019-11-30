#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int num;
    cin >> num;
    vector <string> ret;
    for (int i = 0; i < num; i++){
        double velocity, angle, x, h1, h2;
        cin >> velocity >> angle >> x >> h1 >> h2;
        double t = x / velocity / cos(angle * 3.14 / 180);
        double y = velocity * t * sin(angle * 3.14 / 180) - 4.905 * pow(t,2);
        if (y - h1 >= 1 && h2 - y >= 1)
            ret.push_back("Safe");
        else
            ret.push_back("Not safe");
    }

    for (int i = 0; i < num; i++)
        cout << ret[i] << endl;

    return 0;
}
