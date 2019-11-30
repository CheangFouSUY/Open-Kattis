#include <bits/stdc++.h>

using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fac(n-1);

}

int main ()
{
    int num, temp;
    cin >> num;
    int last[num];
    for (int i = 0; i < num; i++){
        cin >> temp;
        last[i] = fac(temp)%10;
    }
    for (int i = 0; i < num; i++)
        cout << last[i] << endl;

    return 0;
}
