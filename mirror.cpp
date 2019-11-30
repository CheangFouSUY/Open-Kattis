#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int num, q = 0;
    cin >> num;
    int game[num];
    char image[num][20][20];
    int row[num], col[num];
    while (q < num){
        cin >> row[q] >> col[q];
        for (int i = row[q]-1; i > -1; i--){
            for (int j = col[q]-1; j > -1; j--){
                cin >> image[q][i][j];
            }
        }
        q++;
    }

    for (int i = 0; i < num; i++){
        cout << "Test " << i+1 << endl;
        for (int r = 0; r < row[i]; r++ ){
            for (int c = 0; c < col[i]; c++){
                cout << image[i][r][c];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;

}
