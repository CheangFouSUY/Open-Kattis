#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    double p[n], y[n], ret = 0;
    
    for (int i = 0; i < n; i++){
        cin >> p[i] >> y[i];
        ret += p[i] * y[i];
    }
    
    cout << ret;
    
    return 0;
}