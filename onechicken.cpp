#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << "Dr. Chaz needs " << a-b <<" more" << (a-b == 1 ? " piece" : " pieces" )<< " of chicken!";
    }
    else
        cout << "Dr. Chaz will have "<< b-a << (b-a == 1 ? " piece" : " pieces") << " of chicken left over!";

    return 0;
}
