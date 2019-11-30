#include <bits/stdc++.h>

using namespace std;

int main(){

	int num;
	cin >> num;
	string s, ss;
	int sii[num];
    for (int i = 0; i < num; i++){
        cin >> s;
        sii[i] = s.size();
        int k = ceil(sqrt(s.size()));
        string temp (k*k-s.size(),'*');
        s.append(temp);
        for (int j = 0; j < k; j++)
            for (int i = k-1; i >= 0; i--)
                ss.push_back(s.at(k*i+j));
        for (int i = 0; i < ss.size(); i++)
            if (ss.at(i)=='*'){
                ss.erase(ss.begin()+i);
                i--;
            }
    }
    for (int i = 1; i < num; i++){
        sii[i] += sii[i-1];
    }
    int j = 0;
    for (int i = 0; i < num; i++){
        for (; j < sii[i]; j++)
            cout << ss[j];
        cout << "\n";
    }
	return 0;
}
