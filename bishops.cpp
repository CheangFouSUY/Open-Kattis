#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    vector<int> in;
    while (cin >> num){
        if (num == 1)
            in.push_back(1);
        else if (num == 2)
            in.push_back(2);
        else 
            in.push_back(2*(num-1));
    }
    for (int i = 0; i < in.size(); i++)
        cout << in[i] << endl;
    return 0;
}
