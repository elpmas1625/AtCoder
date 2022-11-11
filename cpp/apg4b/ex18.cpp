#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector <char>> vec(N, vector<char>(N, '-'));

    int A, B;
    for (int i=0; i<M; i++){
        cin >> A >> B;
        vec[A-1][B-1] = 'o';
        vec[B-1][A-1] = 'x';
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cout << vec[i][j];
            if (j != N-1){
                cout << ' ';
            }
        }
        cout << endl;
    }
}
