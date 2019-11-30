#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5], temp;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    while (arr[0] != 1 || arr[1] != 2 || arr[2] != 3 || arr[3] != 4 || arr[4] != 5){
        for (int i = 0; i < 4; i++){
            if (arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                for (int j = 0; j < 5; j++)
                    cout << arr[j] << ' ';
                cout << endl;
            }
        }
    }

    return 0;
}
