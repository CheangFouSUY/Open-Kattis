#include <bits/stdc++.h>

using namespace std;


int fib(int n){
    if (n == 0)
        return 2;
    else if (n == 1)
        return 3;
    return fib(n-1)-1+fib(n-1);

}

int main()
{

    int num, ini = 2;
    cin >> num;
    cout << fixed << setprecision(0);
    cout << pow(fib(num), 2);

    return 0;

}
