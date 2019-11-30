#include <bits/stdc++.h>

using namespace std;

int sumdigit(int n)
{
    int a = 0;
    while (n > 0){
        a += n%10;
        n = n / 10;
    }
    return a;

}

int main()
{
    int n;
    vector <int> ret;
    cin >> n;
    while (n != 0) {
        int x = sumdigit(n);
        for (int i = 11; ; i++){
            int a = i*n;
            if (x == sumdigit(a)){
                ret.push_back(i);
                break;
            }
        }
        cin >> n;
    }


    for (int i= 0; i < ret.size(); i++)
        cout << ret[i] << endl;

    return 0;
}
