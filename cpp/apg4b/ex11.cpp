#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;

	// ここにプログラムを追記
	int B = 0, ans = A;
	string op = "";
	for(int i = 0; i < N; i++){
		cin >> op >> B;
		if(op == "+"){
			ans += B;
		}else if(op == "-"){
			ans -= B;
		}else if(op == "*"){
			ans *= B;
		}else if(op == "/" && B != 0){
			ans /= B;
		}else{
			cout << "error" << endl;
			break;
		}
		cout << i+1 << ":" << ans << endl;
	}
}
