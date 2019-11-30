#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main ()
{
    string name;
    cin >> name;
    for (int i = 0; i < name.size(); i++){
        if (isupper(name[i]))
            cout << name[i];
    }
    
    return 0;
}