#include <iostream>

using namespace std;

int main ()
{
    int x, n, ret;
    cin >> x >> n;
    ret = x * (n+1);
    for (int temp, i = 0; i < n; i++){
        cin >> temp;
        ret -= temp;
    }
    
    cout << ret;
    
    return 0;
    
}