#include <bits/stdc++.h>

using namespace std;

int main(){
    int poly;
    cin >> poly;
    while(poly--){
        int v;
        cin >> v;
        int curx, cury, ori_x, ori_y, sum = 0;
        cin >> curx >> cury;
        ori_x = curx;
        ori_y = cury;
        while(--v){
            int tempx, tempy;
            cin >> tempx >> tempy;
            sum += curx * tempy - cury * tempx;
            curx = tempx;
            cury = tempy;
        }
        sum += curx * ori_y - cury * ori_x;
        cout << abs(sum / 2.0) << endl;
    }

    return 0;
}
