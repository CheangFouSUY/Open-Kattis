#include <iostream>

using namespace std;

int main () 
{
    int x, y;
    cin >> x >> y;
    if (y == 0)
        cout << "possible";
    else if (y % 2 == 0)
        cout << "possible";
    else 
        cout << "impossible";
        
    return 0;
    
    
}