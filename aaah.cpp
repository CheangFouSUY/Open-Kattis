#include <iostream>
#include <string>

using namespace std;

int main () 
{
    string a, b;
    cin >> a >> b;
    cout << (a.size() < b.size() ? "no" : "go");
    return 0;
}