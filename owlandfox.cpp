#include <bits/stdc++.h>

using namespace std;

int sum_digit(int n)
{
    int ans = 0;
    while (n > 0){
        ans += n%10;
        n /= 10;
    }
    return ans;
}


int main()
{
    int num;
    cin >> num;
    int arr[num];
    vector<int> ret;
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++){
        int s_ar = sum_digit(arr[i])-1;
        for (int j = arr[i]-1; j >= 0; j--){
            int su_j = sum_digit(j);
            if (su_j == s_ar){
                ret.push_back(j);
                break;
            }
        }
    }

    for (int i = 0; i < ret.size(); i++){
        cout << ret[i] << endl;
    }

    return 0;
}
