#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(){
    int prev, now;

    cin >> prev;
    for (int i=0; i<4; i++){
        cin >> now;
        if (prev == now){
            cout << "YES" << endl;
            exit(0);
        }
        prev = now;
    }
    cout << "NO" << endl;
}
