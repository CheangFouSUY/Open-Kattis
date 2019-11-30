#include <bits/stdc++.h>


using namespace std;

int main ()
{
    int num;
    cin >> num;
    double cnt = num;
    double bat;
    double pt = 0;
    for (int i = 0; i < num; i++){
        cin >> bat;
        if (bat < 0)
            cnt--;
        else {
            pt+= bat;
        }
    }
     cout << pt/cnt;

    return 0;

}
