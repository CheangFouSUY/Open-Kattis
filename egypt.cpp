#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, c;
    cin >> a >> b >> c;
    vector <string> vs;
    while (a != 0){
        int maxi, middle, mini;
        if (a <= b && b <= c){
            mini = a;
            middle = b;
            maxi = c;
        }
        else if (b <= a && a <= c){
            mini = b;
            middle = a;
            maxi = c;
        }
        else if (b <= c && c <= a){
            mini = b;
            middle = c;
            maxi = a;
        }
        else if (c <= b && b <= a){
            mini = c;
            middle = b;
            maxi = a;
        }
        else if (c <= a && a <= b){
            mini = c;
            middle =a;
            maxi = b;
        }
        else if (a <= c && c <= b){
            mini = a;
            middle = c;
            maxi = b;
        }

        if (mini*mini + middle*middle == maxi*maxi)
            vs.push_back("right");
        else
            vs.push_back("wrong");

        cin >> a >> b >> c;
    }
    for (int i = 0; i < vs.size(); i ++){
        cout << vs[i] << endl;
    }

    return 0;
}
