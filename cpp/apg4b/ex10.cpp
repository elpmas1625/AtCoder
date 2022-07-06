#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	// ここにプログラムを追記
	int i = 0;
	string strA = "", strB = "";

	while(i < A){
		strA += ']';
		i++;
	}
	cout << "A:" << strA << endl;

	i = 0;
	while(i < B){
		strB += "]";
		i++;
	}
	cout << "B:" << strB << endl;

}
