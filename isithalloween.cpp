#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string in[2];
    cin >> in[0] >> in[1];

    if (in[0] == "OCT" && in[1] == "31")
        cout << "yup";
    else if (in[0] == "DEC" && in[1] == "25")
        cout << "yup";
    else
        cout << "nope";

    return 0;

}
