#include <bits/stdc++.h>
using namespace std;

int main() {
	int p;
	int price;
	cin >> p;

	if (p == 2) {
		string text;
		cin >> text;
		cout << text << "!" << endl;
	}

	cin >> price;
	int N;
	cin >> N;

	cout << price * N << endl;
}
