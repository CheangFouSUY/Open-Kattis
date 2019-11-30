#include <bits/stdc++.h>

using namespace std;

bool isprime (unsigned long long n) {
    if (n < 2) 
        return false;
    if (n == 2) 
        return true;
    if (n % 2 == 0) 
        return false;
    for (int i=3; (i*i) <= n; i+=2) {
        if (n % i == 0 ) 
            return false;
    }
    return true;
}

int main()
{
    unsigned long long n;
    cin >> n;
    vector<int> ret;
    while (n!=0){
        ret.push_back(n);
        unsigned long long i = 2*n;
        for (;!isprime(i) ;i++);
        ret.push_back(i);
        cin >> n;
    }

    for (int i = 0; i < ret.size(); i+=2){
        if (isprime(ret[i]))
            cout << ret[i+1] << endl;
        else
            cout << ret[i+1] << " (" << ret[i] << " is not prime)" << endl;
    }


    return 0;
}

