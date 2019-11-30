#include <bits/stdc++.h>


using namespace std;

int main ()
{

    int a = 11, k = 4, q = 3, j1 = 20, j2 = 2, t = 10, nine1 = 14, nine2 = 0,eight = 0, seven = 0;
    int num;
    char domi;
    cin >> num >> domi;
    char hand, suit;
    int ret = 0;

    for (int i = 0; i < num*4; i++){
        cin >> hand >> suit;
        if (hand == 'A')
            ret += a;
        else if (hand == 'K')
            ret += k;
        else if (hand == 'Q')
            ret += q;
        else if (hand == 'T')
            ret += t;
        else if (hand == '8')
            ret += eight;
        else if (hand == '7')
            ret += seven;
        else if (hand == 'J' && suit == domi)
            ret += j1;
        else if (hand == 'J')
            ret += j2;
        else if (hand == '9' && suit == domi)
            ret += nine1;
        else
            ret += nine2;

    }

    cout << ret;

    return 0;

}
