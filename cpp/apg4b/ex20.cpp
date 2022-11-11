#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(n);
    vector<vector<int>> tmp = {
        {},
        {},
        {},
    };

    int p;
    for (int i=1; i<n; i++){
        cin >> p;
        vec[p].push_back(i);
    }


    for (int i=0; i<vec.size(); i++){
        for (int j=0; j<vec[i].size(); j++){
            cout << vec[i][j];
            if (j!= n) cout << ' ';
        }
        cout << endl;
    }
}
