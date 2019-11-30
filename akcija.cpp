#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int num, ret = 0;
    cin >> num;
    vector<int> books;
    int temp;
    for (int i = 0; i < num; i++){
        cin >> temp;
        books.push_back(temp);
    }
    sort(books.rbegin(), books.rend());
    for (int i = 1; i <= num; i++){
        if (i % 3 != 0)
            ret += books[i-1];
    }

    cout << ret;
    return 0;
}
