#include <bits/stdc++.h>


using namespace std;

void playa(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
void b(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
void c(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main ()
{
    string play, curr = "100";
    cin >> play;
    for (int i = 0; i < play.size(); i++){
        if (play[i] == 'A')
            playa(curr[0], curr[1]);
        else if (play[i] =='B')
            b(curr[1], curr[2]);
        else
            c(curr[0], curr[2]);
    }

    for (int i = 0; i < 3; i++)
        if (curr[i] == '1')
            cout << i+1;

    return 0;

}
